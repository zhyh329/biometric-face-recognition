#pragma once

#include <vector>
#include <map>
#include <opencv2\opencv.hpp>

#include "BioAttribute.h"

class FaceData
{
public:
	FaceData(void);
	~FaceData(void);

	cv::Mat image;
	std::map<std::string, int> charactreistic;
	std::map<std::string, float> featureCharacteristic;
	std::vector<float> features;

};

