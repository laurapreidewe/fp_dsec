#include<image_recognition/cv_wrapper.h>

OpencvWrapper::OpencvWrapper()
{
    std::cout << "Input your training dir : " << std::endl;
    std::getline(std::cin, train_dir);
    std::cout << "Input your testing dir : " << std::endl;
    std::getline(std::cin, test_dir);
};

cv::Mat OpencvWrapper::LoadImage(std::string filePath)
{
    Mat Image = imread(filePath, IMREAD_COLOR);
    
    if (Image.empty())
    {
        std::cout << "Could not open " << filePath << std::endl;
        std::cout << "Aborting... " << std::endl;
        exit(-1);
    }
    
    return Image;
}
