#include "tiburon_gui/yellowflare.h"
#include "ui_yellowflare.h"


yellowflare::yellowflare(QWidget *parent) : QMainWindow(parent), gui(new Ui::yellowflare) {
  LOGO_PATH = ros::package::getPath("tiburon_gui") + "/utils/logo.jpeg";
  VIDEO_PATH = ros::package::getPath("tiburon_gui")+"/src/gate.avi";

  DESTINATION_PATH = ros::package::getPath("tiburon_gui")+ "/src";
	
  gui->setupUi(this);
  //this->frame_generator();

	//ui->video_text->setText(QString::fromStdString(VIDEO_PATH));
	//ui->destination_text->setText(QString::fromStdString(DESTINATION_PATH));
  frame_save=cv::imread(LOGO_PATH);
  cv::cvtColor(frame_save, frame_save, CV_BGR2RGB);
  gui->logo->setPixmap(QPixmap::fromImage(
      QImage(frame_save.data, frame_save.cols, frame_save.rows,
            frame_save.step, QImage::Format_RGB888)));
  //connect(ui->prev_frame, SIGNAL(pressed()), this, SLOT(show_prev_frame()));
 

}

yellowflare::~yellowflare() { delete gui; }


