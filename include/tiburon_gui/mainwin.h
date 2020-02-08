#ifndef MAINWIN_H
#define MAINWIN_H

#include "ui_mainwin.h"
#include "ui_gate.h"
#include "tiburon_gui/gate.h"
#include "tiburon_gui/redbucket.h"
#include "tiburon_gui/bluebucket.h"
#include "tiburon_gui/redflare.h"
#include "tiburon_gui/yellowflare.h"
#include <QMainWindow>
#include <QPixmap>
#include <QTimer>


#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>
#include <ros/package.h>
#include <ros/ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int8.h>
#include <string>

namespace Ui {
class mainwin;
}

class mainwin : public QMainWindow {
  Q_OBJECT

public:
  explicit mainwin(ros::NodeHandle _nh,QWidget *parent = 0);
  ~mainwin();
public slots:
    	void Gate();
    	void RedBucket();
 	void BlueBucket();
	void RedFlare();
	void YellowFlare();
        void loop();

private:
  	Ui::mainwin *ui;
  	gate    *gateui=NULL;
  	redbucket *redbucketui=NULL;
  	bluebucket *bluebucketui=NULL;
  	redflare *redflareui=NULL;
  	yellowflare *yellowflareui=NULL;
	QTimer *timer;
	cv::VideoCapture cap;
	ros::NodeHandle nh;
image_transport::ImageTransport *it;
  image_transport::Publisher dis;
  	std::string LOGO_PATH, load_image_path, VIDEO_PATH, ROS_PATH, str,
      	frame_name;
  	int count_proc, count_save,save_index;
  	cv::Mat frame_current, frame_save;
};

#endif // FRAMER_H
