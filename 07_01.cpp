#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
using namespace std;
using namespace cv;


//void main()
//{
//    std::string path = "C:\\Users\\l\\Desktop\\Winter\\short\\1.jpg";
//    Mat img = cv::imread(path);
//    imshow("img", img);
//    while (waitKey(0) != 27) {} 
//} 



void main()
{
    string path = "F:\\cut\\film-leader-countdown-U2LCEQM.mp4";
	VideoCapture cap(path);
    Mat frame;
    while (true) 
    {
        cap.read(frame);
        imshow("Video", frame);
        if (waitKey(25) == 27) break; 
    }
    cap.release();
}


//void main()
//{
//    VideoCapture cap(0);
//    Mat frame;
//
//    while (true)
//    {
// 
//        cap.read(frame);
//        imshow("Video", frame);
// 
//        int key = waitKey(0);
//        if (key == 27) break;
//    }
//}