#include <iostream>
#include <vector>
#include "eye_coord.h"
#include "eye_color.h"
#include <string>

std::vector<std::pair<double,double>> picture2_eye1{{0.656313241 , 0.355795026},
    {0.67364639 , 0.355792105 },
    {0.656900346 , 0.330885082},
    {0.63866514 , 0.355561107},
    {0.655809581 , 0.380466849}};
std::vector<std::pair<double,double>> picture2_eye2{
    {0.824149907 , 0.398724645},
    {0.809715033 , 0.396197736},
    {0.825456619 , 0.377967596},
    {0.838804722 , 0.401297212},
    {0.822893739 , 0.41923362},};

std::vector<std::pair<double,double>> eye1{{0.61055249, 0.32887283}, 
    {0.619522929, 0.328012973},
    {0.610167, 0.312254339}, 
    {0.601324379, 0.329743654}, 
    {0.61092782, 0.345393479}};
std::vector<std::pair<double,double>> eye2 = {{0.70457077, 0.327895314}, 
    {0.695523083, 0.328086704},
    {0.704546392, 0.311281383}, 
    {0.713883936, 0.327602804}, 
    {0.70469, 0.344254583}};


std::vector<cv::Point> brown_eye1{{163, 272},{124, 272},{163, 252},{205, 275},{163, 305}};
std::vector<cv::Point> brown_eye2{{ 603, 268}, {563, 268},{603, 244}, {642, 268},{603, 301}};






int main(){
    
    cv::Mat frame;
    cv::VideoCapture cap;
    cap.open(0);
    while(1){
        if(!cap.isOpened()) {
            std::cerr << "ERROR! Unable to open camera\n";
            return -1;
        }
        cap.read(frame);
        
        if (frame.empty()) {
            std::cerr << "ERROR! blank frame grabbed\n";
            break;
        }
        // show live and wait for a key with timeout long enough to show images
        imshow("Live", frame);
        if (cv::waitKey(5) >= 0)
            break;
    }
    return 0;
    // std::string _im_path = "/Users/NellyVardanyan/ACA/try/res/picture.jpg";
    // cv::Mat _image1 = cv::imread(_im_path);
    // Iris iris(eye1, eye2, _image1);
    // iris.color();
    // iris.show();
    // std::cerr << _image.rows << ' ' << _image.cols;
    // cv::Mat grey(300, 300, CV_8UC4, cv::Scalar(_image.at<cv::Vec3b>(100, 400)));
    // std::cerr << _image.at<cv::Vec3b>(100, 400) << std::endl;
    // imshow("grey", grey);
    // cv::waitKey(0);
    // _im_path = "/Users/NellyVardanyan/ACA/try/res/picture.jpg";
    // cv::Mat _image = cv::imread(_im_path);
    // imshow("original", _image);
    // Iris iris2(eye1, eye2, _image);
    // iris2.color();
    // iris2.show();
    //return 0;
}
