/********************************************************************************
** Form generated from reading UI file 'redflare.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDFLARE_H
#define UI_REDFLARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_redflare
{
public:
    QWidget *centralWidget;
    QLabel *logo;
    QLineEdit *TiburonLabel;
    QLineEdit *lineEdit_2;
    QSlider *hmax;
    QSlider *smin;
    QSlider *hmin;
    QSlider *smax;
    QSlider *vmax;
    QSlider *vmin;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *redflare)
    {
        if (redflare->objectName().isEmpty())
            redflare->setObjectName(QStringLiteral("redflare"));
        redflare->resize(990, 537);
        redflare->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(redflare);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(730, 20, 241, 231));
        logo->setFrameShape(QFrame::Box);
        logo->setLineWidth(1);
        logo->setMargin(7);
        logo->setIndent(-1);
        TiburonLabel = new QLineEdit(centralWidget);
        TiburonLabel->setObjectName(QStringLiteral("TiburonLabel"));
        TiburonLabel->setGeometry(QRect(720, 270, 261, 41));
        QFont font;
        font.setFamily(QStringLiteral("Tlwg Mono"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        TiburonLabel->setFont(font);
        TiburonLabel->setReadOnly(true);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 20, 161, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans Mono CJK JP"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        lineEdit_2->setFont(font1);
        lineEdit_2->setReadOnly(true);
        hmax = new QSlider(centralWidget);
        hmax->setObjectName(QStringLiteral("hmax"));
        hmax->setGeometry(QRect(50, 80, 16, 160));
        hmax->setOrientation(Qt::Vertical);
        smin = new QSlider(centralWidget);
        smin->setObjectName(QStringLiteral("smin"));
        smin->setGeometry(QRect(90, 80, 16, 160));
        smin->setOrientation(Qt::Vertical);
        hmin = new QSlider(centralWidget);
        hmin->setObjectName(QStringLiteral("hmin"));
        hmin->setGeometry(QRect(30, 80, 16, 160));
        hmin->setOrientation(Qt::Vertical);
        smax = new QSlider(centralWidget);
        smax->setObjectName(QStringLiteral("smax"));
        smax->setGeometry(QRect(110, 80, 16, 160));
        smax->setOrientation(Qt::Vertical);
        vmax = new QSlider(centralWidget);
        vmax->setObjectName(QStringLiteral("vmax"));
        vmax->setGeometry(QRect(170, 80, 16, 160));
        vmax->setOrientation(Qt::Vertical);
        vmin = new QSlider(centralWidget);
        vmin->setObjectName(QStringLiteral("vmin"));
        vmin->setGeometry(QRect(150, 80, 16, 160));
        vmin->setOrientation(Qt::Vertical);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 20, 261, 231));
        redflare->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(redflare);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 990, 19));
        redflare->setMenuBar(menuBar);
        mainToolBar = new QToolBar(redflare);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        redflare->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(redflare);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        redflare->setStatusBar(statusBar);

        retranslateUi(redflare);

        QMetaObject::connectSlotsByName(redflare);
    } // setupUi

    void retranslateUi(QMainWindow *redflare)
    {
        redflare->setWindowTitle(QApplication::translate("redflare", "Red Flare Tuner", 0));
        logo->setText(QString());
        TiburonLabel->setText(QApplication::translate("redflare", "Team Tiburon", 0));
        lineEdit_2->setText(QApplication::translate("redflare", "Red Flare Detection", 0));
        label->setText(QApplication::translate("redflare", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class redflare: public Ui_redflare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDFLARE_H
