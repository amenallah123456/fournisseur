#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Cacher la partie fournisseur au démarrage
    ui->widgetFournisseur->hide();

    // Quand on clique sur le bouton Fournisseur → on affiche ou cache la section
    connect(ui->buttonFournisseur, &QPushButton::clicked, this, &MainWindow::toggleFournisseur);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleFournisseur()
{
    // Si caché → on affiche, sinon → on cache
    if (ui->widgetFournisseur->isHidden())
        ui->widgetFournisseur->show();
    else
        ui->widgetFournisseur->hide();
}
