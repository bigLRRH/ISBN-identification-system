#pragma once

#include<opencv2/opencv.hpp>

#define R 0
#define G 1
#define B 2

using namespace cv;

class img_matrix
{
private:
	int** RGB[3];
	int rows;
	int cols;
public:
	img_matrix(Mat& _image);
	~img_matrix();
};

