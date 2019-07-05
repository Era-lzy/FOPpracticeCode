//程序设计基础习题集第4章子程序和模块化程序设计4.1基本练习第18题
//编写程序计算一个函数值

#include<stdio.h>
#include<math.h>

double f(double v,double w);
double p(double u,double x);
double y(double x);

int main(){
	double x;//定义输入
	
	double yy;//定义函数值 
	printf("Please input the number x\n");
	printf("x=");
	
	rewind(stdin);
	scanf("%lf",&x);
	
	////rewind(stdin);//刷新缓存
	//scanf("%lf",&v);
	
	yy=y(x);
	
	printf("The result is %lf\n",yy);//输出函数值 
	return 0;
	 

	
	
	
} 


double f(double v,double w){
	double ff;//定义输出值
	ff=(w+v)/(7*v);
	return ff;//返回函数值 
}

double p(double u,double x){
	double pp;//定义输出值
	double temp;//中间变量 
	temp=f(0.3*u,x+u)+u/2;
	pp=temp/(2*x);
	return pp;//返回函数值 
}

double y(double x){
	double yy;//定义输出值
	double temp1,temp2;//定义中间量
	temp1=(p(x,x)*p(x,x)+5*x)*p(x+2,x);
	temp2=p(x+5,x)-sqrt(x);
	yy=temp1/temp2; 
} 
