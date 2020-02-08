#ifndef GATE_H
#define GATE_H

#include "ui_gate.h"
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
class gate;
}

class gate : public QMainWindow {
  Q_OBJECT

public:
  	explicit gate(QWidget *parent = 0);
  	~gate();
	void feed(cv::Mat);
	Ui::gate *ui;
	
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
 	void h2(int);
	void s2(int);
	void v2(int);
	void H2(int);
	void S2(int);
	void V2(int);
	void opn(int );
	void sob(int );
	void out_chan(int );
	void Threshold(int );
	void minLine(int );
	void minGap(int );

private:
  	void channel_show(cv::Mat);
	int HSV[12];
	int S_op=1;
	int S_sob=1;
	int out_ch=0;
  	int ch_index=0;
	int threshold=0;
	int minLineLength=0;
	int minLineGap=0;
  cv::VideoCapture cap;
  std::string LOGO_PATH, CONFIG_PATH;

};

#endif // FRAMER_H
