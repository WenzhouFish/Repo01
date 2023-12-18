#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

void main()
{
    std::string path = "C:\\Users\\l\\Desktop\\R-C.png";
    Mat img = imread(path);
    Mat imgGray,imgBlur,binaryImage;

    imshow("img", img);

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    imshow("imgGray", imgGray);

    GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
    imshow("imgBlur", imgBlur);

    threshold(imgGray, binaryImage, 128, 255, THRESH_BINARY);
    imshow("binaryImage", binaryImage);

    while (waitKey(0) != 27) {}
  
} 