#ifndef BENUTZER_H
#define BENUTZER_H

#include "verbindung.h"
#include <string>
using namespace std;

class Benutzer
{
public:
    Benutzer();
    Benutzer(string Name, vector<shared_ptr<Verbindung>> Verbindungen, string Kontonummer, bool Status, string Passwort, string Type);

    ~Benutzer();

    void PasswortÄndern();

    string getName() const;
    void setName(const string &newName);

    string getKontonummer() const;
    void setKontonummer(const string &newKontonummer);

    bool getStatus() const;
    void setStatus(bool newStatus);

    string getPasswort() const;
    void setPasswort(const string &newPasswort);

    vector<shared_ptr<Verbindung> > &getVerbindungen();
    void setVerbindungen(const vector<shared_ptr<Verbindung> > &newVerbindungen);

private:
    string name;
    vector<shared_ptr<Verbindung>> verbindungen;
    string kontonummer;
    bool status;
    string passwort;
    string type;
};

#endif // BENUTZER_H
