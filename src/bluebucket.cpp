#include "tiburon_gui/bluebucket.h"
#include "ui_bluebucket.h"
#include <iostream>

using namespace std;
using namespace cv;


bluebucket::bluebucket(QWidget *parent) : QMainWindow(parent), ui(new Ui::bluebucket) {
  LOGO_PATH = ros::package::getPath("tiburon_gui") + "/utils/logo.jpeg";
  	
  ui->setupUi(this);
  
  cv:: Mat frame_save=cv::imread(LOGO_PATH);
  cv::cvtColor(frame_save, frame_save, CV_BGR2RGB);
  ui->logo->setPixmap(QPixmap::fromImage(
      QImage(frame_save.data, frame_save.cols, frame_save.rows,
            frame_save.step, QImage::Format_RGB888)));
  connect(ui->save, SIGNAL(pressed()), this, SLOT(save()));
  connect(ui->channel, SIGNAL(currentIndexChanged(int)),this,SLOT(channel(int)));
  connect(ui->out_channel,SIGNAL(currentIndexChanged(int)),this,SLOT(out_chan(int)));
  connect(ui->hmin,SIGNAL(valueChanged(int)),this,SLOT(h(int)));
  connect(ui->smin,SIGNAL(valueChanged(int)),this,SLOT(s(int)));
  connect(ui->vmin,SIGNAL(valueChanged(int)),this,SLOT(v(int)));
  connect(ui->hmax,SIGNAL(valueChanged(int)),this,SLOT(H(int)));
  connect(ui->smax,SIGNAL(valueChanged(int)),this,SLOT(S(int)));
  connect(ui->vmax,SIGNAL(valueChanged(int)),this,SLOT(V(int)));
  connect(ui->sobel,SIGNAL(valueChanged(int)),this,SLOT(sob(int)));
  connect(ui->open_morph,SIGNAL(valueChanged(int)),this,SLOT(opn(int)));
  connect(ui->cn_th,SIGNAL(valueChanged(int)),this,SLOT(Threshold(int)));
  connect(ui->R_width,SIGNAL(valueChanged(int)),this,SLOT(Rwidth(int)));
  connect(ui->R_height,SIGNAL(valueChanged(int)),this,SLOT(Rheight(int)));
  
 

}

bluebucket::~bluebucket() { delete ui; }

void bluebucket::hsv(int value,int index){HSV[index]=value;}
void bluebucket::channel(int index){ch_index=index;}
void bluebucket::h(int val){HSV[0]=val;}
void bluebucket::s(int val){HSV[1]=val;}
void bluebucket::v(int val){HSV[2]=val;}
void bluebucket::H(int val){HSV[3]=val;}
void bluebucket::S(int val){HSV[4]=val;}
void bluebucket::V(int val){HSV[5]=val;}
void bluebucket::opn(int val){S_op=val;}
void bluebucket::sob(int val){S_sob=val;}
void bluebucket::out_chan(int val){out_ch=val;}
void bluebucket::Threshold(int val){threshold=val;}
void bluebucket::Rwidth(int val){width=val;}
void bluebucket::Rheight(int val){height=val;}

void bluebucket::feed(cv::Mat img)
{
   	
if(!img.empty()) {
	cv::Mat dx,maskbb1,maskbb2,mask,fin_img,detected_edges;
	cv::Scalar maxHSV,minHSV;
	channel_show(img);
        cv::GaussianBlur( img, mask, cv::Size( 9, 9 ), 0, 0 );
        cv::cvtColor(mask, mask, cv::COLOR_BGR2HSV);
	if(HSV[0]>0){
        minHSV = cv::Scalar(HSV[0],HSV[1],HSV[2]);
        maxHSV = cv::Scalar(HSV[3],HSV[4],HSV[5]);
        cv::inRange(mask, minHSV, maxHSV, maskbb1);
	mask=maskbb1;
	}else{
	minHSV = cv::Scalar(0,HSV[1],HSV[2]);
        maxHSV = cv::Scalar(HSV[3],HSV[4],HSV[5]);
        cv::inRange(mask, minHSV, maxHSV, maskbb1);

	minHSV = cv::Scalar(180+HSV[0],HSV[1],HSV[2]);
        maxHSV = cv::Scalar(180,HSV[4],HSV[5]);
        cv::inRange(mask, minHSV, maxHSV, maskbb2);
	mask=maskbb1|maskbb2;
	}
	if(out_ch==0)cv::cvtColor(mask, fin_img, cv::COLOR_GRAY2RGB);
	cv::Mat kernel = cv::getStructuringElement( cv::MORPH_RECT,cv::Size( S_op,S_op ),cv::Point(S_op/2,S_op/2) );
	cv::morphologyEx(mask, mask, cv::MORPH_OPEN, kernel);
	if(out_ch==1)cv::cvtColor(mask, fin_img, cv::COLOR_GRAY2RGB);
	cv::Sobel(mask, dx,  CV_16S, 1,0, S_sob);
        cv::convertScaleAbs(dx, mask);
	if(out_ch==2)cv::cvtColor(mask, fin_img, cv::COLOR_GRAY2RGB);
	Canny(mask,detected_edges,threshold,threshold*ratio,kernel_size);
	std::vector<vector<Point> > contour;
	std::vector<Vec4i> hierarchy;
      
	findContours(detected_edges,contour,hierarchy,RETR_EXTERNAL,CHAIN_APPROX_SIMPLE,Point(0,0));
        std::vector<vector<Point> > contour_poly(contour.size());
        std::vector<Rect> boundRect(contour.size());
	std::vector<Point2f>centers(contour.size());

	for(size_t i=0;i<contour.size();i++)
	{
	    approxPolyDP(contour[i],contour_poly[i],3,true);
	    boundRect[i] = boundingRect(contour_poly[i]);
	}
	cv::Mat drawing = Mat::zeros(detected_edges.size(),CV_8UC3);

	for(size_t i=0;i<contour.size();i++)
	{
           cv::drawContours(drawing,contour_poly,(int)i,(0,0,255));
           if(boundRect[i].width>width&&boundRect[i].height>height)
	   rectangle(img,boundRect[i].tl(),boundRect[i].br(),(0,0,255),2);
        }
         	     	
        
	if(out_ch==3)fin_img=img;
	
    ui->out->setPixmap(QPixmap::fromImage(QImage(fin_img.data, fin_img.cols, fin_img.rows,fin_img.step, QImage::Format_RGB888)));

    }	
}

void bluebucket::save()
{
	std::cout<<"Parameters saved\n";
        ifstream f("/home/amit/catkin_workspace/src/tiburon_gui/config/bluebucketconfig.txt");
        if(f.eof())
	{
		std::cout<<"Config File missing\n";
                ofstream ofs("/home/amit/catkin_workspace/src/tiburon_gui/config/bluebucketconfig.txt");
                ofs.close();
	}
        else
	{
		ofstream f("/home/amit/catkin_workspace/src/tiburon_gui/config/bluebucketconfig.txt",ios::ate);
		f << "HSV THRESHOLDING PARAMETERS:\nLow_H = " << HSV[0];
		f << "\nLow_S = " << HSV[1];
		f << "\nLow_V = " << HSV[2];
		f << "\nHigh_H = " << HSV[3];
		f << "\nHigh_S = " << HSV[4];
		f << "\nHigh_V = " << HSV[5];
		f << "\nSOBEL PARAMETERS:\nKernel_size = " << S_sob;
		f << "\nMORPH PARAMETERS:\nKernel_size = " << S_op;
		f << "\nCANNY THRESHOLD PARAMETERS:\nThreshold = " << threshold;
		f << "\nRatio = " << ratio;
		f << "\nKernel_size = " << kernel_size;
		f << "\nCONTOUR RECTANGLE PARAMETERS:\nHeight = " << height;
		f << "\nWidth = " << width;
		f.close(); 
	}
}
void bluebucket::channel_show(cv::Mat img)
{
	std::vector<cv::Mat> Channels(3);
   	 cv::Mat zero, fin_img;
    	 zero = cv::Mat::zeros(cv::Size(img.cols, img.rows), CV_8UC1);
	switch(ch_index)
	{
		case 0:
	 	cv::cvtColor(img, fin_img, CV_BGR2RGB);
		break;

		case 1:
		split(img, Channels);
		Channels[0]=Channels[2];
		Channels[1]=zero;
		Channels[2]=zero;
		merge(Channels, fin_img);
		break;

		case 2:
		split(img, Channels);
		Channels[0]=zero;
		Channels[2]=zero;
		merge(Channels, fin_img);
		break;
		
		case 3:
		split(img, Channels);
		Channels[2]=Channels[0];
		Channels[0]=zero;
		Channels[1]=zero;
		merge(Channels, fin_img);
		break;

		case 4:
		cv::cvtColor(img, fin_img, CV_BGR2HSV);
		break;

		case 5:
		cv::cvtColor(img, fin_img, CV_BGR2GRAY);
		Channels[0]=fin_img;
		Channels[1]=fin_img;
		Channels[2]=fin_img;
		merge(Channels, fin_img);
		break;
	}
        ui->channel_show->setPixmap(QPixmap::fromImage(QImage(fin_img.data, fin_img.cols, fin_img.rows,fin_img.step, QImage::Format_RGB888)));
}

