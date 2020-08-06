#pragma once
#include <iostream>
#include <vector>
#include <Lmcons.h>
#include <opencv2/opencv.hpp>
#include "Config.h"
#include <msclr/marshal_cppstd.h>
//#include <Windows.h>

using namespace std;
using namespace cv;
//using namespace System;

class ColorProcessor
{
public:
	ColorProcessor(Config config);
	void calculateAverange();
	Vec3b getColor();

private:
	void getRandomPoints();
	

	int numOfPoints;
	Config *config;
	cv::Vec3i resultColor;
	vector<cv::Point> points;
	cv::Mat wallpaperImage;
	//std::string userName;
};

