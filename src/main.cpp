#include "tiburon_gui/mainwin.h"
#include <QApplication>
int main(int argc, char *argv[]) {
	ros::init(argc, argv, "mainwin");
    	ros::NodeHandle nh;
  	QApplication a(argc, argv);
  	mainwin w(nh);
  	w.show();
  	return a.exec();
}
