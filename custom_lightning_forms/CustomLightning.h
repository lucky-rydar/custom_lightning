#pragma once
#define CORSAIR_LIGHTING_SDK_DISABLE_DEPRECATION_WARNINGS

#include <iostream>
#include <atomic>
#include <vector>
#include <unordered_set>
#include <CUESDK.h>
#include <opencv2/opencv.hpp>

using namespace std;

class CustomLightning
{
public:
	CustomLightning();
	void printLastError();

	void setColor();
	void setColor(int R, int G, int B);
	void setColor(cv::Vec3b color);

private:
	const char* toString(CorsairError error);
	void getAvailableKeys(int R = 0, int G = 0, int B = 0);

	vector<CorsairLedColor> colorsVector;

};
