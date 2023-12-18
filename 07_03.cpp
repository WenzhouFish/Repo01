#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

void main()
{
    std::string path = "C:\\Users\\l\\Desktop\\R-C.png";
    Mat img = imread(path);

    Mat edges;
    Canny(img, edges, 50, 150);

    
    Mat dilated;
    dilate(edges, dilated, Mat(), Point(-1, -1), 2);

    Mat eroded;
    erode(dilated, eroded, Mat(), Point(-1, -1), 1);

    
    Mat resized;
    resize(eroded, resized, Size(), 0.5, 0.5);

   
    imshow("img", img);
    imshow("Processed Image", resized);

    while (waitKey(0) != 27) {}
}