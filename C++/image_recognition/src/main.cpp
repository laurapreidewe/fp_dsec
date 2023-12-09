#include<opencv4/opencv2/opencv.hpp>
#include<bits/stdc++.h>
#include<image_recognition/utils.h>

using namespace cv;
Mat LoadImage(const String filePath);
std::vector<int> calc_histogram (Mat src_pic, int anzBin); 

int main()
{
    //Mat img = LoadImage("/home/hifzhil/myWork/DSEC/Dataset/botol_putih/1.jpg");
    namedWindow("original", WINDOW_NORMAL);
    imshow("original", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}

// cv::Mat LoadImage(const String filePath)
// {
//     Mat Image = imread(filePath, IMREAD_COLOR);
    
//     if (Image.empty())
//     {
//         std::cout << "Could not open " << filePath << std::endl;
//         std::cout << "Aborting... " << std::endl;
//         exit(-1);
//     }
    
//     return Image;
// }

// std::vector<int> calc_histogram (Mat src_pic, int anzBin) 
// {
//     cv::Size size = src_pic.size();
//     double binSize = 256.0 / anzBin;        //new definition
//     std::vector<int> histogram(anzBin,0);        //i don't know if this works so I
//                                             //so I will leave it

//     //goes through all rows
//     for (int y = 0; y<size.height; y++) 
//     {
//         //grabs an entire row of the imageData
//         const uchar *src_pic_point = (uchar *)(src_pic.imageData + y*src_pic.widthStep);

//         //goes through each column
//         for (int x = 0; x<size.width; x++) 
//         {
//             //for each bin
//             for (int z = 0; z < anzBin; z++)
//             {
//                 //check both upper and lower limits
//                 if (src_pic_point[x] >= z*binSize && src_pic_point[x] < (z+1)*binSize)
//                 {
//                     //increment the index that contains the point
//                     histogram[z]++;
//                 }
//             }
//         }
//     }
//     return histogram;
// }