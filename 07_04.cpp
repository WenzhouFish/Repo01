#include <opencv2/opencv.hpp>

using namespace cv;

int brightnessValue = 50;
int contrastValue = 50;
Mat originalImage;

void adjustImage(int, void*) {

    double alpha = contrastValue / 50.0;
    int beta = brightnessValue - 50;

    Mat adjustedImage = Mat::zeros(originalImage.size(), originalImage.type());
    originalImage.convertTo(adjustedImage, -1, alpha, beta);


    imshow("Adjusted Image", adjustedImage);
}

int main() {

    Mat img = imread("C:\\Users\\l\\Desktop\\Winter\\short\\1.jpg");
    resize(img, originalImage, Size(), 0.25, 0.25);

    namedWindow("Adjusted Image");
    imshow("Adjusted Image", originalImage);

    createTrackbar("Brightness", "Adjusted Image", &brightnessValue, 100, adjustImage);
    createTrackbar("Contrast", "Adjusted Image", &contrastValue, 100, adjustImage);

    waitKey(0);

    return 0;
}