#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    // デバイスの取得
    cv::VideoCapture cap(0);
    // エラー処理
    if (!cap.isOpened()) {
        std::cerr << "fail to open cv::VideoCapture" << std::endl;
        return -1; 
    }

    // 取得したframを格納する
    cv::Mat frame;
    // Escで抜ける
    while (cv::waitKey(1) != '\x1b'){
        // get frame
        cap >> frame;
        cv::imshow("window", frame);
    }

    return 0;
}
