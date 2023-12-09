#include<opencv4/opencv2/opencv.hpp>

class OpencvWrapper
{
    public :
        OpencvWrapper();
        cv::Mat LoadImage(std::string filePath);
        std::string test_dir = '';
        std::string train_dir = '';
    private :
        cv::Mat image;
};