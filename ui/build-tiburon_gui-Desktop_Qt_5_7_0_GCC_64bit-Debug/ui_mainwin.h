/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwin
{
public:
    QWidget *centralWidget;
    QLabel *logo;
    QLineEdit *TiburonLabel;
    QPushButton *redFlare;
    QPushButton *redBucket;
    QPushButton *yellowFlare;
    QPushButton *blueBucket;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *greenMat;
    QPushButton *gate;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwin)
    {
        if (mainwin->objectName().isEmpty())
            mainwin->setObjectName(QStringLiteral("mainwin"));
        mainwin->resize(990, 537);
        mainwin->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(mainwin);
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
        redFlare = new QPushButton(centralWidget);
        redFlare->setObjectName(QStringLiteral("redFlare"));
        redFlare->setGeometry(QRect(50, 220, 191, 41));
        redBucket = new QPushButton(centralWidget);
        redBucket->setObjectName(QStringLiteral("redBucket"));
        redBucket->setGeometry(QRect(50, 290, 191, 41));
        yellowFlare = new QPushButton(centralWidget);
        yellowFlare->setObjectName(QStringLiteral("yellowFlare"));
        yellowFlare->setGeometry(QRect(50, 150, 191, 41));
        blueBucket = new QPushButton(centralWidget);
        blueBucket->setObjectName(QStringLiteral("blueBucket"));
        blueBucket->setGeometry(QRect(50, 360, 191, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 20, 400, 300));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(95, 239, 179, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(87, 163, 115, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush3);
        label->setPalette(palette);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 20, 231, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans Mono CJK JP"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        lineEdit_2->setFont(font1);
        lineEdit_2->setReadOnly(true);
        greenMat = new QPushButton(centralWidget);
        greenMat->setObjectName(QStringLiteral("greenMat"));
        greenMat->setEnabled(false);
        greenMat->setGeometry(QRect(50, 430, 191, 41));
        gate = new QPushButton(centralWidget);
        gate->setObjectName(QStringLiteral("gate"));
        gate->setGeometry(QRect(50, 80, 191, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(880, 360, 101, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(880, 430, 101, 41));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 360, 181, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Noto Sans Mono CJK JP"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        lineEdit_3->setFont(font2);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 430, 181, 41));
        lineEdit_4->setFont(font2);
        lineEdit_4->setReadOnly(true);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(470, 430, 391, 41));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(470, 360, 391, 41));
        mainwin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 990, 19));
        mainwin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainwin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainwin->setStatusBar(statusBar);

        retranslateUi(mainwin);

        QMetaObject::connectSlotsByName(mainwin);
    } // setupUi

    void retranslateUi(QMainWindow *mainwin)
    {
        mainwin->setWindowTitle(QApplication::translate("mainwin", "Tiburon Video Tuner", 0));
        logo->setText(QString());
        TiburonLabel->setText(QApplication::translate("mainwin", "Team Tiburon", 0));
        redFlare->setText(QApplication::translate("mainwin", "Red Flare", 0));
        redBucket->setText(QApplication::translate("mainwin", "Red Bucket", 0));
        yellowFlare->setText(QApplication::translate("mainwin", "Yellow Flare ", 0));
        blueBucket->setText(QApplication::translate("mainwin", "Blue Bucket", 0));
        label->setText(QString());
        lineEdit_2->setText(QApplication::translate("mainwin", " Select any feature to tune ", 0));
        greenMat->setText(QApplication::translate("mainwin", "Green Mat", 0));
        gate->setText(QApplication::translate("mainwin", "Gate Detection", 0));
        pushButton->setText(QApplication::translate("mainwin", "video", 0));
        pushButton_2->setText(QApplication::translate("mainwin", "ROS", 0));
        lineEdit_3->setText(QApplication::translate("mainwin", "  Enter video path", 0));
        lineEdit_4->setText(QApplication::translate("mainwin", "Enter Ros Channel name", 0));
        lineEdit->setPlaceholderText(QApplication::translate("mainwin", "enter ros channel name", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("mainwin", "enter video file path", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwin: public Ui_mainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
