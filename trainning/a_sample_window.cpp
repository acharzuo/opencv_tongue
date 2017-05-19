//#include "opencv2/highgui.hpp"
#include "opencv2/highgui.hpp"

int main( int argc, char** argv) {

  // 加载图片，cvLoadImage会根据图像类型自动判断格式
  IplImage* img = cvLoadImage( argv[1] );
  
  // 创建一个窗体 
  cvNamedWindow("显示图片", CV_WINDOW_AUTOSIZE);
  
  // 将图片显示到窗体上
  cvShowImage("显示图片", img);
  
  // 等待窗体结束，按任意键结束
  cvWaitKey(0);
    
  // 回收图片占用资源
  cvReleaseImage(&img);

  // 销毁窗体
  cvDestroyWindow("显示图片");


}
