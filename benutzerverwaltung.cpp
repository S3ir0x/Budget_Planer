#include "benutzerverwaltung.h"

BenutzerVerwaltung::BenutzerVerwaltung(vector<shared_ptr<Benutzer> > BenutzerListe) : benutzerListe(BenutzerListe) {}

shared_ptr<Benutzer> BenutzerVerwaltung::findBenutzer(const string Kontonummer)
{
    for(size_t i = 0; 0 < benutzerListe.size(); i++) {
        if(benutzerListe[i]->getKontonummer()==Kontonummer) {
            return benutzerListe[i];
        }
    }

    return nullptr;
}

shared_ptr<Verbindung> BenutzerVerwaltung::findVerbindung(const string verbindungsNummer)
{
    for(size_t i = 0; 0 < benutzerListe.size();  i++) {
        const vector<shared_ptr<Verbindung>> &verbindungen = benutzerListe[i]->getVerbindungen();

                                                                                                        //o(n) somehow
        for(size_t j = 0; 0 < verbindungen.size(); j++) {
            if(verbindungen[j]->getVerbindungsnummer() == verbindungsNummer)
                return verbindungen[j];

        }

    }

    return nullptr;
}

vector<shared_ptr<Benutzer> > BenutzerVerwaltung::getBenutzerListe() const
{
    return benutzerListe;
}

void BenutzerVerwaltung::setBenutzerListe(const vector<shared_ptr<Benutzer> > &newBenutzerListe)
{
    benutzerListe = newBenutzerListe;
}
