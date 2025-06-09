#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <QFile>
#include "benutzer.h"
#include "benutzerverwaltung.h"
#include"json.hpp"
#include <QMessageBox>
#include <QObject>
#include <QFile>
#include <QJsonDocument>
#include <QFileDialog>

using namespace std;


class filehandler : public QObject
{
public:
    filehandler();
    filehandler(const QString &name);

    ~filehandler();

    void readfile(const QFile name);
    void writefile(const QFile name);


    QFile getFilename() const;
    void setFilename(const QFile &newFilename);

private:
    QFile *file;
    QString Filename;
    BenutzerVerwaltung *benutzerVerwaltung;
};

#endif // FILEHANDLER_H
