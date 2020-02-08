/********************************************************************************
** Form generated from reading UI file 'gate.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GATE_H
#define UI_GATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gate
{
public:
    QWidget *centralWidget;
    QLabel *logo;
    QLabel *channel_show;
    QPushButton *save;
    QSlider *hmin;
    QSlider *hmax;
    QSlider *smin;
    QSlider *vmin;
    QSlider *smax;
    QSlider *vmax;
    QComboBox *channel;
    QLabel *out;
    QComboBox *out_channel;
    QSlider *HL_th;
    QSlider *HL_mll;
    QSlider *HL_mlg;
    QSlider *open_morph;
    QSlider *sobel;
    QLabel *gateLabel;
    QLabel *tiburonLabel;
    QLabel *channelLabel;
    QLabel *outLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *vmax_2;
    QLabel *label_5;
    QSlider *smin_2;
    QLabel *label_6;
    QSlider *smax_2;
    QSlider *hmin_2;
    QSlider *vmin_2;
    QSlider *hmax_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gate)
    {
        if (gate->objectName().isEmpty())
            gate->setObjectName(QStringLiteral("gate"));
        gate->resize(967, 779);
        QFont font;
        font.setPointSize(1);
        gate->setFont(font);
        gate->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(gate);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        logo = new QLabel(centralWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(710, 10, 241, 231));
        logo->setFrameShape(QFrame::Box);
        logo->setLineWidth(1);
        logo->setMargin(7);
        logo->setIndent(-1);
        channel_show = new QLabel(centralWidget);
        channel_show->setObjectName(QStringLiteral("channel_show"));
        channel_show->setGeometry(QRect(290, 10, 400, 300));
        channel_show->setFrameShape(QFrame::Box);
        save = new QPushButton(centralWidget);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(800, 590, 81, 41));
        hmin = new QSlider(centralWidget);
        hmin->setObjectName(QStringLiteral("hmin"));
        hmin->setGeometry(QRect(30, 50, 16, 211));
        hmin->setMinimum(-20);
        hmin->setMaximum(180);
        hmin->setOrientation(Qt::Vertical);
        hmax = new QSlider(centralWidget);
        hmax->setObjectName(QStringLiteral("hmax"));
        hmax->setGeometry(QRect(50, 50, 16, 211));
        hmax->setMaximum(180);
        hmax->setOrientation(Qt::Vertical);
        smin = new QSlider(centralWidget);
        smin->setObjectName(QStringLiteral("smin"));
        smin->setGeometry(QRect(110, 50, 16, 211));
        smin->setMaximum(255);
        smin->setOrientation(Qt::Vertical);
        vmin = new QSlider(centralWidget);
        vmin->setObjectName(QStringLiteral("vmin"));
        vmin->setGeometry(QRect(190, 50, 16, 211));
        vmin->setMaximum(255);
        vmin->setOrientation(Qt::Vertical);
        smax = new QSlider(centralWidget);
        smax->setObjectName(QStringLiteral("smax"));
        smax->setGeometry(QRect(130, 50, 16, 211));
        smax->setMaximum(255);
        smax->setOrientation(Qt::Vertical);
        vmax = new QSlider(centralWidget);
        vmax->setObjectName(QStringLiteral("vmax"));
        vmax->setGeometry(QRect(210, 50, 16, 211));
        vmax->setMaximum(255);
        vmax->setOrientation(Qt::Vertical);
        channel = new QComboBox(centralWidget);
        channel->setObjectName(QStringLiteral("channel"));
        channel->setGeometry(QRect(550, 320, 141, 31));
        out = new QLabel(centralWidget);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(290, 360, 400, 300));
        out->setFrameShape(QFrame::Box);
        out_channel = new QComboBox(centralWidget);
        out_channel->setObjectName(QStringLiteral("out_channel"));
        out_channel->setGeometry(QRect(548, 680, 141, 31));
        HL_th = new QSlider(centralWidget);
        HL_th->setObjectName(QStringLiteral("HL_th"));
        HL_th->setGeometry(QRect(930, 320, 16, 211));
        HL_th->setOrientation(Qt::Vertical);
        HL_mll = new QSlider(centralWidget);
        HL_mll->setObjectName(QStringLiteral("HL_mll"));
        HL_mll->setGeometry(QRect(730, 320, 16, 211));
        HL_mll->setOrientation(Qt::Vertical);
        HL_mlg = new QSlider(centralWidget);
        HL_mlg->setObjectName(QStringLiteral("HL_mlg"));
        HL_mlg->setGeometry(QRect(830, 320, 16, 211));
        HL_mlg->setOrientation(Qt::Vertical);
        open_morph = new QSlider(centralWidget);
        open_morph->setObjectName(QStringLiteral("open_morph"));
        open_morph->setGeometry(QRect(780, 660, 160, 16));
        open_morph->setOrientation(Qt::Horizontal);
        sobel = new QSlider(centralWidget);
        sobel->setObjectName(QStringLiteral("sobel"));
        sobel->setGeometry(QRect(60, 660, 160, 16));
        sobel->setOrientation(Qt::Horizontal);
        gateLabel = new QLabel(centralWidget);
        gateLabel->setObjectName(QStringLiteral("gateLabel"));
        gateLabel->setGeometry(QRect(60, 10, 121, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Noto Sans Mono CJK JP"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        gateLabel->setFont(font1);
        gateLabel->setAlignment(Qt::AlignCenter);
        tiburonLabel = new QLabel(centralWidget);
        tiburonLabel->setObjectName(QStringLiteral("tiburonLabel"));
        tiburonLabel->setGeometry(QRect(700, 260, 261, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Tlwg Mono"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        tiburonLabel->setFont(font2);
        tiburonLabel->setAlignment(Qt::AlignCenter);
        channelLabel = new QLabel(centralWidget);
        channelLabel->setObjectName(QStringLiteral("channelLabel"));
        channelLabel->setGeometry(QRect(290, 320, 251, 31));
        channelLabel->setFont(font1);
        channelLabel->setAlignment(Qt::AlignCenter);
        outLabel = new QLabel(centralWidget);
        outLabel->setObjectName(QStringLiteral("outLabel"));
        outLabel->setGeometry(QRect(290, 680, 251, 31));
        outLabel->setFont(font1);
        outLabel->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 260, 61, 21));
        QFont font3;
        font3.setPointSize(8);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 260, 61, 21));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 260, 61, 21));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 570, 61, 21));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        vmax_2 = new QSlider(centralWidget);
        vmax_2->setObjectName(QStringLiteral("vmax_2"));
        vmax_2->setGeometry(QRect(210, 360, 16, 211));
        vmax_2->setMaximum(255);
        vmax_2->setOrientation(Qt::Vertical);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 570, 61, 21));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);
        smin_2 = new QSlider(centralWidget);
        smin_2->setObjectName(QStringLiteral("smin_2"));
        smin_2->setGeometry(QRect(110, 360, 16, 211));
        smin_2->setMaximum(255);
        smin_2->setOrientation(Qt::Vertical);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 570, 61, 21));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        smax_2 = new QSlider(centralWidget);
        smax_2->setObjectName(QStringLiteral("smax_2"));
        smax_2->setGeometry(QRect(130, 360, 16, 211));
        smax_2->setMaximum(255);
        smax_2->setOrientation(Qt::Vertical);
        hmin_2 = new QSlider(centralWidget);
        hmin_2->setObjectName(QStringLiteral("hmin_2"));
        hmin_2->setGeometry(QRect(30, 360, 16, 211));
        hmin_2->setMinimum(-20);
        hmin_2->setMaximum(180);
        hmin_2->setOrientation(Qt::Vertical);
        vmin_2 = new QSlider(centralWidget);
        vmin_2->setObjectName(QStringLiteral("vmin_2"));
        vmin_2->setGeometry(QRect(190, 360, 16, 211));
        vmin_2->setMaximum(255);
        vmin_2->setOrientation(Qt::Vertical);
        hmax_2 = new QSlider(centralWidget);
        hmax_2->setObjectName(QStringLiteral("hmax_2"));
        hmax_2->setGeometry(QRect(50, 360, 16, 211));
        hmax_2->setMaximum(180);
        hmax_2->setOrientation(Qt::Vertical);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 280, 31, 16));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        label_7->setFont(font4);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 280, 91, 16));
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 280, 51, 16));
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 300, 211, 21));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_10->setFont(font5);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 610, 211, 21));
        label_11->setFont(font5);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 590, 91, 16));
        label_12->setFont(font4);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(190, 590, 51, 16));
        label_13->setFont(font4);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 590, 31, 16));
        label_14->setFont(font4);
        label_14->setAlignment(Qt::AlignCenter);
        gate->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(gate);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 967, 6));
        gate->setMenuBar(menuBar);
        mainToolBar = new QToolBar(gate);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        gate->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(gate);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        gate->setStatusBar(statusBar);

        retranslateUi(gate);

        channel->setCurrentIndex(0);
        out_channel->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gate);
    } // setupUi

    void retranslateUi(QMainWindow *gate)
    {
        gate->setWindowTitle(QApplication::translate("gate", "Gate Detection Tuner", 0));
        logo->setText(QString());
        channel_show->setText(QString());
        save->setText(QApplication::translate("gate", "Save", 0));
        channel->clear();
        channel->insertItems(0, QStringList()
         << QApplication::translate("gate", "RGB", 0)
         << QApplication::translate("gate", "R only", 0)
         << QApplication::translate("gate", "G only", 0)
         << QApplication::translate("gate", "B only", 0)
         << QApplication::translate("gate", "HSV", 0)
         << QApplication::translate("gate", "H only", 0)
         << QApplication::translate("gate", "S only", 0)
         << QApplication::translate("gate", "V only", 0)
         << QApplication::translate("gate", "Gray", 0)
        );
        out->setText(QString());
        out_channel->clear();
        out_channel->insertItems(0, QStringList()
         << QApplication::translate("gate", "Thresholding", 0)
         << QApplication::translate("gate", "MorphTransform", 0)
         << QApplication::translate("gate", "Sobel", 0)
         << QApplication::translate("gate", "HoughLinesProb", 0)
        );
        gateLabel->setText(QApplication::translate("gate", "Gate Detection", 0));
        tiburonLabel->setText(QApplication::translate("gate", "Team Tiburon", 0));
        channelLabel->setText(QApplication::translate("gate", "Channel Feed", 0));
        outLabel->setText(QApplication::translate("gate", "Processed Feed", 0));
        label->setText(QApplication::translate("gate", "min max ", 0));
        label_2->setText(QApplication::translate("gate", "min max ", 0));
        label_3->setText(QApplication::translate("gate", "min max ", 0));
        label_4->setText(QApplication::translate("gate", "min max ", 0));
        label_5->setText(QApplication::translate("gate", "min max ", 0));
        label_6->setText(QApplication::translate("gate", "min max ", 0));
        label_7->setText(QApplication::translate("gate", "HUE", 0));
        label_8->setText(QApplication::translate("gate", "SATURATION", 0));
        label_9->setText(QApplication::translate("gate", "VALUE", 0));
        label_10->setText(QApplication::translate("gate", "HSV THRESHOLDING 1", 0));
        label_11->setText(QApplication::translate("gate", "HSV THRESHOLDING 1", 0));
        label_12->setText(QApplication::translate("gate", "SATURATION", 0));
        label_13->setText(QApplication::translate("gate", "VALUE", 0));
        label_14->setText(QApplication::translate("gate", "HUE", 0));
    } // retranslateUi

};

namespace Ui {
    class gate: public Ui_gate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GATE_H
