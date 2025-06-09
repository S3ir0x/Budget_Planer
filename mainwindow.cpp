#include "mainwindow.h"
#include "qmessagebox.h"
#include "ui_mainwindow.h"
#include "QString"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Verdana", 12);
    this->setFont(font);
    setWindowTitle("Budget-Tracker");
    setWindowIcon(QIcon("/Users/letoj/OneDrive/Bilder/Design_ohne_Titel__1_-removebg-p (1).png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::erfolgsmeldungEinlesen(int Benutzer_Counter)
{
    QMessageBox::information(this,"Erfolg", "Daten wurden Erfolgreich eingelesen: Test:" + QString::number(Benutzer_Counter));
}
