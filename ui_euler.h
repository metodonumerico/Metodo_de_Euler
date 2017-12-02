/********************************************************************************
** Form generated from reading UI file 'euler.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EULER_H
#define UI_EULER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Euler
{
public:
    QWidget *centralWidget;
    QTextBrowser *texto;
    QDoubleSpinBox *xi;
    QDoubleSpinBox *xfinal;
    QDoubleSpinBox *h;
    QPushButton *procesar;
    QPushButton *borrar;
    QPushButton *salir;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Euler)
    {
        if (Euler->objectName().isEmpty())
            Euler->setObjectName(QStringLiteral("Euler"));
        Euler->resize(591, 452);
        centralWidget = new QWidget(Euler);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        texto = new QTextBrowser(centralWidget);
        texto->setObjectName(QStringLiteral("texto"));
        texto->setGeometry(QRect(30, 70, 521, 261));
        xi = new QDoubleSpinBox(centralWidget);
        xi->setObjectName(QStringLiteral("xi"));
        xi->setGeometry(QRect(70, 20, 62, 22));
        xfinal = new QDoubleSpinBox(centralWidget);
        xfinal->setObjectName(QStringLiteral("xfinal"));
        xfinal->setGeometry(QRect(280, 20, 62, 22));
        h = new QDoubleSpinBox(centralWidget);
        h->setObjectName(QStringLiteral("h"));
        h->setGeometry(QRect(450, 20, 62, 22));
        procesar = new QPushButton(centralWidget);
        procesar->setObjectName(QStringLiteral("procesar"));
        procesar->setGeometry(QRect(40, 370, 75, 23));
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(270, 370, 75, 23));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(480, 370, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 21, 21));
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 20, 61, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 20, 21, 21));
        label_3->setFont(font);
        Euler->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Euler);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 591, 21));
        Euler->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Euler);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Euler->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Euler);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Euler->setStatusBar(statusBar);

        retranslateUi(Euler);

        QMetaObject::connectSlotsByName(Euler);
    } // setupUi

    void retranslateUi(QMainWindow *Euler)
    {
        Euler->setWindowTitle(QApplication::translate("Euler", "Euler", Q_NULLPTR));
        procesar->setText(QApplication::translate("Euler", "Procesar", Q_NULLPTR));
        borrar->setText(QApplication::translate("Euler", "Borrar", Q_NULLPTR));
        salir->setText(QApplication::translate("Euler", "Salir", Q_NULLPTR));
        label->setText(QApplication::translate("Euler", "Xi", Q_NULLPTR));
        label_2->setText(QApplication::translate("Euler", "X final", Q_NULLPTR));
        label_3->setText(QApplication::translate("Euler", "H", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Euler: public Ui_Euler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EULER_H
