#ifndef YELLOWFLARE_H
#define YELLOWFLARE_H

#include "ui_yellowflare.h"
#include <QMainWindow>
#include <QPixmap>
#include <QTimer>

#include <opencv2/opencv.hpp>
#include <ros/package.h>
#include <ros/ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int8.h>
#include <string>

namespace Ui {
class yellowflare;
}

class yellowflare : public QMainWindow {
  Q_OBJECT

public:
  explicit yellowflare(QWidget *parent = 0);
  ~yellowflare();
public slots:
  

private:
  Ui::yellowflare *gui;
  cv::VideoCapture cap;
  std::string LOGO_PATH, load_image_path, VIDEO_PATH, DESTINATION_PATH, str,
      frame_name;
  int count_proc, count_save,save_index;
  cv::Mat frame_current, frame_save;
};

#endif // FRAMER_H
