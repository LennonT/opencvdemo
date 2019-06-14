#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

void showRandomImage() {
    Mat grayimg(600, 800, CV_8UC1);
    Mat colorimg(600, 800, CV_8UC3);

    MatIterator_<uchar> grayit, grayend;
    for (grayit = grayimg.begin<uchar>(), grayend = grayimg.end<uchar>(); grayit != grayend; ++grayit) {
        *grayit = rand() % 255;
    }

    MatIterator_<Vec3b> colorit, colorend;
    for (colorit = colorimg.begin<Vec3b>(), colorend = colorimg.end<Vec3b>(); colorit != colorend; ++ colorit) {
        (*colorit)[0] = rand() % 255;
        (*colorit)[1] = rand() % 255;
        (*colorit)[2] = rand() % 255;
    }

    imshow("grayimg", grayimg);
    imshow("colorimg", colorimg);
    waitKey(0);
}

int main() {
    /*
    cout << "Hello, World!" << endl;

    Mat Z = Mat::zeros(2, 3, CV_8UC1);
    cout << "Z = " << endl << " " << Z << endl;
    */

    showRandomImage();

    return 0;
}