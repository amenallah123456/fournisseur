/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *buttonFournisseur;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *Retour;
    QLabel *label_4;
    QTableWidget *widgetFournisseur;
    QListWidget *listWidget;
    QPushButton *widgetFournisseur_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 0, 601, 71));
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 152, 219);\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 700 18pt \"Arial\";"));
        label->setFrameShape(QFrame::Shape::Panel);
        label->setFrameShadow(QFrame::Shadow::Sunken);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(true);
        label->setMargin(18);
        label->setIndent(107);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 201, 611));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 152, 219);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 110, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(-10, 150, 211, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(-10, 210, 211, 29));
        buttonFournisseur = new QPushButton(centralwidget);
        buttonFournisseur->setObjectName("buttonFournisseur");
        buttonFournisseur->setGeometry(QRect(-10, 270, 211, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 330, 201, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 390, 201, 29));
        Retour = new QPushButton(centralwidget);
        Retour->setObjectName("Retour");
        Retour->setGeometry(QRect(0, 450, 201, 29));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 20, 141, 71));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/LOOOGGGO.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(true);
        label_4->setMargin(-28);
        widgetFournisseur = new QTableWidget(centralwidget);
        if (widgetFournisseur->rowCount() < 9)
            widgetFournisseur->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        widgetFournisseur->setVerticalHeaderItem(8, __qtablewidgetitem8);
        widgetFournisseur->setObjectName("widgetFournisseur");
        widgetFournisseur->setGeometry(QRect(210, 150, 271, 331));
        widgetFournisseur->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(52, 152, 219);"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(520, 150, 256, 331));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 152, 219);"));
        widgetFournisseur_3 = new QPushButton(centralwidget);
        widgetFournisseur_3->setObjectName("widgetFournisseur_3");
        widgetFournisseur_3->setGeometry(QRect(222, 510, 101, 29));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(340, 510, 101, 29));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(520, 510, 101, 29));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(652, 510, 101, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">FOURNISSEUR</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("MainWindow", "FOURNISSEUR", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244Employ\303\251", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\360\237\222\233Client", nullptr));
        buttonFournisseur->setText(QCoreApplication::translate("MainWindow", "\360\237\223\232Fournisseur (s\303\251lectionn\303\251)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\360\237\223\201Projet", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\342\232\231\357\270\217\303\211quipement", nullptr));
        Retour->setText(QCoreApplication::translate("MainWindow", "\360\237\224\222D\303\251connexion", nullptr));
        label_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = widgetFournisseur->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = widgetFournisseur->verticalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "NOM", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = widgetFournisseur->verticalHeaderItem(4);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "PRENOM", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = widgetFournisseur->verticalHeaderItem(6);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = widgetFournisseur->verticalHeaderItem(8);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ADRESSE", nullptr));
        widgetFournisseur_3->setText(QCoreApplication::translate("MainWindow", "\360\237\247\271Effacer", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\342\236\225Ajouter", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217Modifier", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\360\237\224\215Recherche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
