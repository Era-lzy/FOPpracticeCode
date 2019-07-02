//程序设计基础习题集2.1基本练习第7小题
//编写程序计算数学中的符号函数sign(x)

#include<stdio.h>
int sign(double x);//声明符号函数sign(x)
//注意函数声明和函数定义要保持一致 


int main(){
	double x;//定义输入值
	int signx;//定义输出值
	printf("please input the number x.\n");
	scanf("%lf",&x);//把输入的值赋给x
	//注意scanf()函数的用法
	//输入双精度型变量的值要用格式声明“lf”
	signx=sign(x);//把符号函数的值赋给输出变量
	printf("The result is %d\n",signx);//输出结果
	return 0;
	
}

int sign(double x){
	if(x>0){
		return 1;
	}
	else if(x<0)
		return -1;
	else
		return 0;
}
