#include "Config.h"

using namespace System;
using namespace System::IO;

Config::Config(string configFileName)
{
	file = new fstream(configFileName);
	
	userName = msclr::interop::marshal_as<std::string>(Environment::UserName);
	
	pathToFile = new std::string();

	loadSettings();
	//getImageName();
}

void Config::loadSettings()
{
	string buff;

	*file >> buff;
	if (buff == "num_of_points")
		*file >> numOfPoints;

}

void Config::getImageName()
{
	std::string buff_path = "C:\\Users\\" + userName + "\\AppData\\Roaming\\Microsoft\\Windows\\Themes\\CachedFiles\\";
	System::String ^path = msclr::interop::marshal_as<System::String^>(buff_path);
	
	System::String^ NetPathToFile = Directory::GetFiles(path)->GetValue(0)->ToString();
	

	*pathToFile = msclr::interop::marshal_as<std::string>(NetPathToFile);
}
