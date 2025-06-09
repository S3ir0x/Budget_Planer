#include "filehandler.h"

filehandler::filehandler() {}

filehandler::filehandler(const QString& name) : file(new QFile(name))
{

}

filehandler::~filehandler()
{
    if(file) {
        file->close();
        delete file;
    }
}

void filehandler::readfile(const QFile name)
{
    using json = nlohmann::json;

    if (!file->open(QIODevice::ReadOnly)) {
        QMessageBox::warning(nullptr, tr("Fehler"), tr("Die Datei konnte nicht geöffnet werden."));
        return;
    }

    QByteArray fileData = file->readAll();
    file->close();

    json parser = json::parse(fileData.toStdString());

    for(size_t i = 0; 0 < parser.size(); i++) {
        json item = parser[i];

        string type = item.value("type","");

        if (type.empty()) {
            throw invalid_argument("Kein Typ für Buchung gefunden in Zeile " );
        }

        if(type == "Verbindung") {

            string id = item.value("VerbindungsNummer", "");
            shared_ptr<Verbindung> Verb_Pointer = benutzerVerwaltung->findVerbindung(id);

            if(!Verb_Pointer) {

                if (item.value("eingangsDatum", "").empty() || item.value("ausgangsDatum", "").empty() ||
                    item.value("company", "").empty() || item.value("id", "").empty() ||
                    item.value("fromDate", "").empty() || item.value("toDate", "").empty() || item.value("vehicleClass", "").empty()) {
                    throw invalid_argument("Fehlendes Attribut in Zeile: ");
                }
                if (!(item["value"].is_number_float() || item["value"].is_number_integer())) {
                    throw invalid_argument("Attribut Preis ist kein numerischer Wert, der als double abgespeichert werden kann! Zeile: ");
                }
            }
        }

        if(type == "Konto") {

        }

    }
}

void filehandler::writefile(const QFile name)
{
    using json = nlohmann::json;

    for(size_t i = 0; i < benutzerVerwaltung->getBenutzerListe().size(); i++) {

       shared_ptr<Benutzer> b = benutzerVerwaltung[i];
    }
}



