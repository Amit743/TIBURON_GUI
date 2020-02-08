#ifndef REDFLARE_H
#define REDFLARE_H

#include "ui_redflare.h"
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
class redflare;
}

class redflare : public QMainWindow {
  Q_OBJECT

public:
  explicit redflare(QWidget *parent = 0);
  ~redflare();
public slots:
  

private:
  Ui::redflare *gui;
  cv::VideoCapture cap;
  std::string LOGO_PATH, load_image_path, VIDEO_PATH, DESTINATION_PATH, str,
      frame_name;
  int count_proc, count_save,save_index;
  cv::Mat frame_current, frame_save;
};

#endif // FRAMER_H
