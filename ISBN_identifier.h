#pragma once

#include<opencv2/opencv.hpp>

using namespace cv;

class ISBN_identifier
{
	int identify(Mat& _image);
};