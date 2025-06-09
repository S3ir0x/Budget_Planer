#ifndef VERBINDUNG_H
#define VERBINDUNG_H

#include "qlocale.h"
#include <string>
#include <QDate>


using namespace std;

class Benutzer;

class Verbindung
{
public:
    Verbindung();
    Verbindung(shared_ptr<Benutzer> Sender, shared_ptr<Benutzer> empfänger, QDate Eingangsdatum, QDate Ausgangsdatum, double Value, string Verwendungszweck, string Type, string VerbindungsNummer);

    ~Verbindung();

    QDate getEingangsdatum() const;
    void setEingangsdatum(const QDate &newEingangsdatum);

    QDate getAusgangsdatum() const;
    void setAusgangsdatum(const QDate &newAusgangsdatum);

    double getValue() const;
    void setValue(double newValue);

    string getVerwendungszweck() const;
    void setVerwendungszweck(const string &newVerwendungszweck);

    shared_ptr<Benutzer> getSender() const;
    void setSender(const shared_ptr<Benutzer> &newSender);

    shared_ptr<Benutzer> getEmpfänger() const;
    void setEmpfänger(const shared_ptr<Benutzer> &newEmpfänger);

    string getVerbindungsnummer() const;
    void setVerbindungsnummer(const string &newVerbindungsnummer);

    string getType() const;
    void setType(const string &newType);

private:
    shared_ptr<Benutzer> sender;
    shared_ptr<Benutzer> empfänger;
    QDate eingangsdatum;
    QDate ausgangsdatum;
    double value;
    string verwendungszweck;
    string type;
    string verbindungsNummer;
};

#endif // VERBINDUNG_H
