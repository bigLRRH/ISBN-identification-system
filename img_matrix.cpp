#include "img_matrix.h"
#include<opencv2/opencv.hpp>

using namespace cv;

img_matrix::img_matrix(Mat& _image)
{
	rows = _image.rows;
	cols = _image.cols;
	for (int color = 0; color < 3; color++)
	{
		RGB[color] = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			RGB[color][i] = new int[cols];
			for (int j = 0; j < cols; j++)
				RGB[color][i][j] = _image.at<Vec3b>(i, j)[color];
		}
	}
}

img_matrix::~img_matrix()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < rows; j++)
			delete RGB[i][j];
		delete RGB[i];
	}

}
