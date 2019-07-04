//程序设计基础习题集第3章循环程序设计3.2提高练习第5小题
//编写程序，画函数y=f(x)=e^(-x)*sin(2*pi*x)在[0,2]区间上的图形

#include<stdio.h>
#include<math.h>
#define PI 3.141592653589 //定义圆周率pi值
#define E  2.17828 		  //定义自然常数e的值	

double fx(double x);//声明函数，方便直接带入计算 

int main(){
	//定义垂直方向为X轴，水平方向为Y轴 
	double eps=5e-2;//定义画图的精度
	double xmin=0.0;//定义区间起点
	double xmax=2.0;//定义区间终点 
	int xn=(int)((xmax-xmin)/eps);//计算循环次数n
	double xrange=xmax-xmin;//定义自变量区间大小
	double yrange;//定义函数值的区间大小  
	int yn;//定义函数值的循环系数 
	int i,j;//定义循环变量
	double ymin=fx(0.0),ymax=fx(0.0);//初始化函数值的最值
	double ytemp;//定义函数计算值的中间变量
	double xtemp; 
	//先计算函数值的最大值和最小值
	for(i=0;i<=xn;++i){
		xtemp=xmin+(double)i/(double)xn*xrange;//此时自变量的大小 
		ytemp=fx(xtemp);//函数值的大小
		//注意应该带入xtemp,不要带入i 
		if(ytemp<ymin){
			ymin=ytemp;//记录最小值 
		}
		else if(ytemp>ymax){
			ymax=ytemp;//记录最大值 
		}
	}
	
	
	yrange=ymax-ymin;
	 
	for(i=0;i<=xn;++i){
		xtemp=xmin+(double)i/(double)xn*xrange;//此时自变量的大小
		ytemp=fx(xtemp);
		yn=(int)((ytemp-ymin)/yrange*xn);//计算应该在何处输出图像.
		//把计算结果转换为int型,注意需要转换的是最后的结果 
		for(j=0;j<=yn;++j){
			printf(" ");//输出空格 
		}
		printf("*\n");//输出函数点图像.记得换行！ 
		
		/* 
		for(;j<=xn;++j){
			printf(" ");//其实可以不用输出 
		}
		printf("\n");
		*/ 
	}
	 
	/*
	printf("\n");
	printf("ymax=%lf\n",ymax);
	printf("ymin=%lf\n",ymin);
	printf("xn=%d\n",xn);
	printf("yn=%d\n",yn);
	printf("yrange=%lf\n",yrange);
	printf("xrange=%lf\n",xrange);
	printf("ytemp=%lf\n",ytemp);
	printf("xtemp=%lf\n",xtemp); 
	printf("eps=%lf\n",eps);
	*/    
	
	return 0; 
} 

double fx(double x){
	double yy=pow(E,-x)*sin(2.0*PI*x);
	return yy;
} 
