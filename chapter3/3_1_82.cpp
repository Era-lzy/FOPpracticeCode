//程序设计基础习题集第3章循环程序设计3.1基本练习82题\
//编写程序，用迭代法解方程
//2*X^3+0.5*X^2-X+0.093=0

//注意迭代法的思路,在课本P75-76页有介绍
//注意取的初始解需要满足收敛条件 

#include<stdio.h>
#include<math.h>

int main(){
	double x0=0.09;//取一个初始解1.0
	double x=0.09;//参与迭代 
	double eps=1e-6;//取精度为10^(-6)
	
	do{
		x0=x; 
		x=2*pow(x,3.0)+0.5*pow(x,2.0)+0.093;
	}
	while(fabs(x-x0)>eps);
	//while( ((x-x0)>e) || ((x-x0)<-e));  //别忘了加分号 
	//注意abs()函数为int型函数，其函数原型为int abs(int x);,功能为求整数x的绝对值
	//此处可以使用fabs()，浮点绝对值 
	printf("The result is %lf.\n",x0);
	return 0;
} 
