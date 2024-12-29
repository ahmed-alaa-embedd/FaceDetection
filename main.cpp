#include <iostream>
#include <opencv4/opencv2/opencv.hpp>


int main() {
    cv::Mat image = cv::imread("image.jpg");
    if (image.empty()) {
        std::cerr << "Error: Image not found" << std::endl;
        return 1;
    }
    cv::imshow("Image", image);
    cv::waitKey(0);
    return 0;
}