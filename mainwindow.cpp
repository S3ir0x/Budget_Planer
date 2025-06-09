#include "mainwindow.h"
#include "ui_mainwindow.h"

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
