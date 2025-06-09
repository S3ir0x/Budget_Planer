#include "verbindung.h"

Verbindung::Verbindung() : type("unbekannt")
{

}

Verbindung::Verbindung(shared_ptr<Benutzer> Sender, shared_ptr<Benutzer> Empfänger, QDate Eingangsdatum, QDate Ausgangsdatum, double Value, string Verwendungszweck, string VerbindungsNummer, string Type) :  sender(Sender), empfänger(Empfänger), eingangsdatum(Eingangsdatum), ausgangsdatum(Ausgangsdatum), value(Value), verwendungszweck(Verwendungszweck), type(Type), verbindungsNummer(VerbindungsNummer) {

}

Verbindung::~Verbindung()
{

}

QDate Verbindung::getEingangsdatum() const
{
    return eingangsdatum;
}

void Verbindung::setEingangsdatum(const QDate &newEingangsdatum)
{
    eingangsdatum = newEingangsdatum;
}

QDate Verbindung::getAusgangsdatum() const
{
    return ausgangsdatum;
}

void Verbindung::setAusgangsdatum(const QDate &newAusgangsdatum)
{
    ausgangsdatum = newAusgangsdatum;
}

double Verbindung::getValue() const
{
    return value;
}

void Verbindung::setValue(double newValue)
{
    value = newValue;
}

string Verbindung::getVerwendungszweck() const
{
    return verwendungszweck;
}

void Verbindung::setVerwendungszweck(const string &newVerwendungszweck)
{
    verwendungszweck = newVerwendungszweck;
}

shared_ptr<Benutzer> Verbindung::getSender() const
{
    return sender;
}

void Verbindung::setSender(const shared_ptr<Benutzer> &newSender)
{
    sender = newSender;
}

shared_ptr<Benutzer> Verbindung::getEmpfänger() const
{
    return empfänger;
}

void Verbindung::setEmpfänger(const shared_ptr<Benutzer> &newEmpfänger)
{
    empfänger = newEmpfänger;
}

string Verbindung::getVerbindungsnummer() const
{
    return verbindungsNummer;
}

void Verbindung::setVerbindungsnummer(const string &newVerbindungsnummer)
{
    verbindungsNummer = newVerbindungsnummer;
}

string Verbindung::getType() const
{
    return type;
}

void Verbindung::setType(const string &newType)
{
    type = newType;
}
