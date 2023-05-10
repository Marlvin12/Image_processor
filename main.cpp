//Marlvin Goremusandu
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    // Read the input image
    Mat inputImage = imread("input.jpg", IMREAD_COLOR);
    if (inputImage.empty()) {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

  
    Mat grayImage;
    cvtColor(inputImage, grayImage, COLOR_BGR2GRAY);

 
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(7, 7), 1.5, 1.5);

 
    Mat edgeImage;
    Canny(blurredImage, edgeImage, 100, 200);

    
    imwrite("output_gray.jpg", grayImage);
    imwrite("output_blurred.jpg", blurredImage);
    imwrite("output_edge.jpg", edgeImage);

  
    namedWindow("Input Image", WINDOW_AUTOSIZE);
    imshow("Input Image", inputImage);

    namedWindow("Grayscale Image", WINDOW_AUTOSIZE);
    imshow("Grayscale Image", grayImage);

    namedWindow("Blurred Image", WINDOW_AUTOSIZE);
    imshow("Blurred Image", blurredImage);

    namedWindow("Edge Image", WINDOW_AUTOSIZE);
    imshow("Edge Image", edgeImage);

   
    waitKey(0);
    destroyAllWindows();

    return 0;
}

