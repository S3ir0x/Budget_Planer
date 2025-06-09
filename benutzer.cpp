#include "benutzer.h"

Benutzer::Benutzer()
{

}

Benutzer::Benutzer(const string &Name, const string &Kontonummer, const bool &Status, const string &Passwort, const string &Type) : name(Name), kontonummer(Kontonummer), status(Status), passwort(Passwort), type(Type) {}

Benutzer::~Benutzer()
{

}

void Benutzer::addVerbindungen(const shared_ptr<Verbindung> &v)
{
    verbindungen.push_back(v);
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
