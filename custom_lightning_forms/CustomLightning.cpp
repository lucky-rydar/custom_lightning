#include "CustomLightning.h"

using namespace cv;

CustomLightning::CustomLightning()
{
	CorsairPerformProtocolHandshake();

	getAvailableKeys();
}

const char* CustomLightning::toString(CorsairError error)
{
	{
		switch (error) {
		case CE_Success:
			return "CE_Success";
		case CE_ServerNotFound:
			return "CE_ServerNotFound";
		case CE_NoControl:
			return "CE_NoControl";
		case CE_ProtocolHandshakeMissing:
			return "CE_ProtocolHandshakeMissing";
		case CE_IncompatibleProtocol:
			return "CE_IncompatibleProtocol";
		case CE_InvalidArguments:
			return "CE_InvalidArguments";
		default:
			return "unknown error";
		}
	}
}

void CustomLightning::printLastError()
{
	auto error_code = CorsairGetLastError();
	if (error_code)
	{
		cout << "Error: " << toString(error_code) << endl;
	}
}

void CustomLightning::getAvailableKeys(int R, int G, int B)
{
	auto colorsSet = std::unordered_set<int>();
	for (int deviceIndex = 0, size = CorsairGetDeviceCount(); deviceIndex < size; deviceIndex++) {
		if (const auto ledPositions = CorsairGetLedPositionsByDeviceIndex(deviceIndex)) {
			for (auto i = 0; i < ledPositions->numberOfLed; i++) {
				const auto ledId = ledPositions->pLedPosition[i].ledId;
				colorsSet.insert(ledId);
			}
		}
	}


	colorsVector.reserve(colorsSet.size());
	for (const auto& ledId : colorsSet) {
		colorsVector.push_back({ static_cast<CorsairLedId>(ledId), R, G, B });
	}
}

void CustomLightning::setColor()
{
	CorsairSetLedsColorsAsync(int(colorsVector.size()), colorsVector.data(), nullptr, nullptr);
}

void CustomLightning::setColor(int R, int G, int B)
{
	for (int i = 0; i < (int)colorsVector.size(); i++)
	{
		colorsVector[i].r = R;
		colorsVector[i].g = G;
		colorsVector[i].b = B;
	}


	CorsairSetLedsColorsAsync(int(colorsVector.size()), colorsVector.data(), nullptr, nullptr);
}

void CustomLightning::setColor(Vec3b color)
{
	for (int i = 0; i < (int)colorsVector.size(); i++)
	{
		colorsVector[i].r = color[0];
		colorsVector[i].g = color[1];
		colorsVector[i].b = color[2];
	}

	CorsairSetLedsColorsAsync(int(colorsVector.size()), colorsVector.data(), nullptr, nullptr);
}