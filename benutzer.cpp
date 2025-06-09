#include "benutzer.h"

Benutzer::Benutzer()
{

}

Benutzer::Benutzer(string Name, vector<shared_ptr<Verbindung>> Verbindungen, string Kontonummer, bool Status, string Passwort, string Type) : name(Name), verbindungen(Verbindungen), kontonummer(Kontonummer), status(Status), passwort(Passwort), type(Type) {}

Benutzer::~Benutzer()
{

}


string Benutzer::getName() const
{
    return name;
}

void Benutzer::setName(const string &newName)
{
    name = newName;
}

string Benutzer::getKontonummer() const
{
    return kontonummer;
}

void Benutzer::setKontonummer(const string &newKontonummer)
{
    kontonummer = newKontonummer;
}

bool Benutzer::getStatus() const
{
    return status;
}

void Benutzer::setStatus(bool newStatus)
{
    status = newStatus;
}

string Benutzer::getPasswort() const
{
    return passwort;
}

void Benutzer::setPasswort(const string &newPasswort)
{
    passwort = newPasswort;
}

vector<shared_ptr<Verbindung> >& Benutzer::getVerbindungen()
{
    return verbindungen;
}

void Benutzer::setVerbindungen(const vector<shared_ptr<Verbindung> > &newVerbindungen)
{
    verbindungen = newVerbindungen;
}
