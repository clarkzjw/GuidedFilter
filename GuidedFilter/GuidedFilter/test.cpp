#include "guidedfilter.h"

int main()
{
	Mat src = imread("src.bmp", IMREAD_GRAYSCALE);
	Mat guide = imread("guide.png");
	Mat dst_own(src.rows, src.cols, CV_8UC1, Scalar(0));
	Mat dst_opencv(src.rows, src.cols, CV_8UC1, Scalar(0));

	GuidedFilter(guide, src, dst_own, 3, 1e-6);
	imwrite("own.bmp", dst_own);

	cv::ximgproc::guidedFilter(guide, src, dst_opencv, 3, 1e-6);
	imwrite("opencv.bmp", dst_opencv);

	printf("Done");
	return 0;
}