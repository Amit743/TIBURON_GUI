#ifndef BLUEBUCKET_H
#define BLUEBUCKET_H

#include "ui_bluebucket.h"
#include <QMainWindow>
#include <QPixmap>
#include <QTimer>

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <ros/package.h>
#include <ros/ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int8.h>
#include <string>
#include <fstream>

namespace Ui {
class bluebucket;
}

class bluebucket : public QMainWindow {
  Q_OBJECT

public:
  explicit bluebucket(QWidget *parent = 0);
  ~bluebucket();
  void feed(cv::Mat);
  Ui::bluebucket *ui;

public slots:
  void save();
  void channel(int);
  void hsv(int,int);
  void h(int);
  void s(int);
  void v(int);
  void H(int);
  void S(int);
  void V(int);
  void opn(int);
  void sob(int);
  void out_chan(int);
  void Threshold(int);
  void Rwidth(int);
  void Rheight(int);  

private:
  void channel_show(cv::Mat);
  int HSV[6];
  int S_op=1;
  int S_sob=1;
  int out_ch=0;
  int ch_index=0;
  int threshold=0;
  int width=10;
  int height=10;
  int ratio=2;
  int kernel_size=3;
   cv::VideoCapture cap;
  std::string LOGO_PATH;
};

#endif // BLUEBUCKET_H
