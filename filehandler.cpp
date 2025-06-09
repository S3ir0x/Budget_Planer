#include "filehandler.h"
#include "mainwindow.h"

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

    int Counter_Benutzer = 0;

    for(size_t i = 0; 0 < parser.size(); i++) {
        json item = parser[i];

        string type = item.value("type","");

        if (type.empty()) {
            throw invalid_argument("Kein Typ für Buchung gefunden in Zeile " );
        }

        if(type == "Konto") {

            string id = item.value("Kontonummer", "");
            shared_ptr<Benutzer> Benutzer_pointer = benutzerVerwaltung->findBenutzer(id);

            if (item.value("Name", "").empty() || item.value("Kontonummer", "").empty() ||
                    item.value("Passwort", "").empty() || item.value("Type", "").empty() || item.value("Status","").empty()); {
                throw invalid_argument("Fehlendes Attribut in Zeile: ");
            }

            Benutzer_pointer = make_shared<Benutzer>(item.value("Name", ""),
                                                     id,
                                                     item.value("Status", false),
                                                     item.value("Passwort", ""),
                                                     item.value("Type", ""));
            benutzerVerwaltung->addBenutzer(Benutzer_pointer);

            Counter_Benutzer++;
        }

        if(type == "Verbindung") {

            string id = item.value("VerbindungsNummer", "");
            shared_ptr<Verbindung> Verb_Pointer = benutzerVerwaltung->findVerbindung(id);

            if(!Verb_Pointer) {

                if (item.value("EingangsDatum", "").empty() || item.value("AusgangsDatum", "").empty() ||
                    item.value("Verwendungszweck", "").empty() || item.value("VerbindungsNummer", "").empty(),
                    item.value("Sender", "").empty() || item.value("Empfänger", "").empty()); {
                    throw invalid_argument("Fehlendes Attribut in Zeile: ");
                }
                if (!(item["value"].is_number_float() || item["value"].is_number_integer())) {
                    throw invalid_argument("Attribut Preis ist kein numerischer Wert, der als double abgespeichert werden kann! Zeile: ");
                }

                string senderID = item.value("Sender", "");
                auto sender = benutzerVerwaltung->findBenutzer(senderID);

                string empfängerID = item.value("Empfänger", "");
                auto empfänger = benutzerVerwaltung->findBenutzer(empfängerID);

                Verb_Pointer =      make_shared<Verbindung>(sender,
                                                            empfänger,
                                                            QDate::fromString(QString::fromStdString(item.value("EingangsDatum", "")), "yyyy-MM-dd"),
                                                            QDate::fromString(QString::fromStdString(item.value("AusgangsDatum", "")), "yyyy-MM-dd"),
                                                            item.value("value", 0.0),
                                                            item.value("Verwendungszweck",""),
                                                            id,
                                                            item.value("Verbindungsnummer", ""));

                if(empfänger) {
                    empfänger->addVerbindungen(Verb_Pointer);
                }

                if(sender) {
                    sender->addVerbindungen(Verb_Pointer);
                }
            }

        }

    }

    mainWindow->erfolgsmeldungEinlesen(Counter_Benutzer);
}

void filehandler::writefile(const QFile name)
{
    using json = nlohmann::json;

    for(size_t i = 0; i < benutzerVerwaltung->getBenutzerListe().size(); i++) {

       shared_ptr<Benutzer> b = benutzerVerwaltung[i];
    }
}



