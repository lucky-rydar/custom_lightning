#include "ColorProcessor.h"

using namespace cv;
using namespace std;
using namespace System;

ColorProcessor::ColorProcessor(Config config)
{
	this->config = &config;
	numOfPoints = this->config->numOfPoints;
	
	string thisUserName = "mihas";
	string thisImagename = "CachedImage_1920_1080_POS4.jpg";

	//wallpaperImage = Mat::zeros(1920, 1080, CV_8UC3);
	
	wallpaperImage = imread(*config.pathToFile);
	
	
	

}

void ColorProcessor::getRandomPoints()
{
	RNG rng(time(NULL));

	Point buffPoint;

	for (int i = 0; i < numOfPoints; i++)
	{
		buffPoint.x = rng.uniform(0, wallpaperImage.cols);
		buffPoint.y = rng.uniform(0, wallpaperImage.rows);

		points.push_back(buffPoint);
	}


}

void ColorProcessor::calculateAverange()
{
	getRandomPoints();

	//cout << wallpaperImage.at<Vec3b>(points[0]) << endl;

	for (int i = 0; i < numOfPoints; i++)
	{
		resultColor[0] += wallpaperImage.at<Vec3b>(points[i])[0];
		resultColor[1] += wallpaperImage.at<Vec3b>(points[i])[1];
		resultColor[2] += wallpaperImage.at<Vec3b>(points[i])[2];
	}

	resultColor = resultColor / numOfPoints;

}

Vec3b ColorProcessor::getColor()
{
	Vec3b color;
	color[0] = resultColor[2];
	color[1] = resultColor[1];
	color[2] = resultColor[0];

	cout << color << endl;

	return color;
}
