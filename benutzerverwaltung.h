#ifndef BENUTZERVERWALTUNG_H
#define BENUTZERVERWALTUNG_H

#include "Benutzer.h"

using namespace std;

class BenutzerVerwaltung
{
public:
    BenutzerVerwaltung() = default;
    BenutzerVerwaltung(vector<shared_ptr<Benutzer>> BenutzerListe);

    shared_ptr<Benutzer> BenutzerAnlegen();
    void BenutzerLöschen(shared_ptr<Benutzer>);

    void addBenutzer(shared_ptr<Benutzer> &v);

    shared_ptr<Benutzer> findBenutzer(const string Kontonummer);
    shared_ptr<Verbindung> findVerbindung(const string verbindungsNummer);

    vector<shared_ptr<Benutzer> > getBenutzerListe() const;
    void setBenutzerListe(const vector<shared_ptr<Benutzer> > &newBenutzerListe);

private:
    vector<shared_ptr<Benutzer>> benutzerListe;
};

#endif // BENUTZERVERWALTUNG_H
