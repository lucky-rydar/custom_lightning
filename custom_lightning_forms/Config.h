#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

using namespace std;

class Config
{
public:
	Config(string configFileName);
	

	int numOfPoints;
	string *pathToFile;
private:
	void loadSettings();
	void getImageName();

	std::string userName;
	fstream* file;
};

