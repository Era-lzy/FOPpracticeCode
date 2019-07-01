//第1章顺序程序设计1.3综合练习14小题
#include<stdio.h>
#include<math.h>

#define yield_per 950  //定义单位产量，亩产950公斤
#define xa 547
#define ya 411
#define xb 804
#define yb 77
#define xc 39
#define yc 208
#define xd 116 
#define yd 332
//定义各点坐标
int main(){
    //先求玉米地面积，再求玉米地产量,记得亩和平方米的
    double area;//玉米地总面积，亩
    double area1;//三角形ABD面积，平方米
    double area2;//三角形BCD面积，平方米
    double Lab;//边AB的长度
    double Lad;//边AD长度
    double Lbd;//边BD长度
    double Lbc;//边BC长度
    double Lcd;//边CD长度
    double p1;//p1=Lab+Lad+Lbd
    double p2;//p2=Lbc+Lbd+Lcd
    double yield;//玉米地产量
    Lab=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    Lad=sqrt(pow(xa-xd,2)+pow(ya-yd,2));
    Lbd=sqrt(pow(xb-xd,2)+pow(yb-yd,2));
    Lbc=sqrt(pow(xb-xc,2)+pow(yb-yc,2));
    Lcd=sqrt(pow(xc-xd,2)+pow(yc-yd,2));
    p1=Lab+Lad+Lbd;
    p2=Lbc+Lbd+Lcd;
    area1=sqrt(p1*(p1-Lab)*(p1-Lad)*(p1-Lbd));
    area2=sqrt(p2*(p2-Lbc)*(p2-Lbd)*(p2-Lcd));
    area=(area1+area2)/666.67;//将玉米地面积换算成亩，1亩约等于666.67平方米
    yield=area*yield_per;//玉米地产量，单位：公斤
    printf("The area of the corn is %f mu\n",area); 
    printf("The corn yield is %f kg\n",yield);//输出玉米地产量
    return 0;
    

}
