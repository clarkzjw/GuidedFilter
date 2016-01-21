#ifndef GUIDED_FILTER_H
#define GUIDED_FILTER_H

#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <opencv2\opencv.hpp>
#include <opencv2\ximgproc.hpp>

using namespace cv;

#include <stdio.h>

void GuidedFilter(Mat guide, Mat src, Mat dst, int radius, double eps);

#endif
