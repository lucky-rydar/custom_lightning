#include "MyForm.h"
#include <Windows.h>


using namespace cv;
using namespace customlightningforms; // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}