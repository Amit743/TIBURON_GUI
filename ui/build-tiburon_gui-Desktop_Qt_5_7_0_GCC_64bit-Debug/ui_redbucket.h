/********************************************************************************
** Form generated from reading UI file 'redbucket.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDBUCKET_H
#define UI_REDBUCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_redbucket
{
public:
    QWidget *centralWidget;
    QLabel *logo;
    QLineEdit *TiburonLabel;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *redbucket)
    {
        if (redbucket->objectName().isEmpty())
            redbucket->setObjectName(QStringLiteral("redbucket"));
        redbucket->resize(990, 537);
        redbucket->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(redbucket);
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
        lineEdit_2->setGeometry(QRect(30, 20, 231, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans Mono CJK JP"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        lineEdit_2->setFont(font1);
        lineEdit_2->setReadOnly(true);
        redbucket->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(redbucket);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 990, 19));
        redbucket->setMenuBar(menuBar);
        mainToolBar = new QToolBar(redbucket);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        redbucket->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(redbucket);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        redbucket->setStatusBar(statusBar);

        retranslateUi(redbucket);

        QMetaObject::connectSlotsByName(redbucket);
    } // setupUi

    void retranslateUi(QMainWindow *redbucket)
    {
        redbucket->setWindowTitle(QApplication::translate("redbucket", "Red Bucket Tuner", 0));
        logo->setText(QString());
        TiburonLabel->setText(QApplication::translate("redbucket", "Team Tiburon", 0));
        lineEdit_2->setText(QApplication::translate("redbucket", "Gate Detection", 0));
    } // retranslateUi

};

namespace Ui {
    class redbucket: public Ui_redbucket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDBUCKET_H
