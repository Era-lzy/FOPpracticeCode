//程序设计基本习题集第3章循环程序设计3.2提高练习第26题
//小学生的九九表形式，编写程序，打印之

#include<stdio.h>

int main(){
	int i,j;//定义参与乘法的两个变量
	int n=9;//定义参与乘法的最大值 
	int product;//定义两个数的乘积
	
	for(i=1;i<=n;++i){
		printf("%3d",i);//输出第一列 
		for(j=1;j<=i;++j){
			product=i*j;//计算乘积 
			printf("%3d",product);//输出乘积 
		}
		printf("\n");//换行，准备输出下一列 
	}
	printf("  *");
	for(j=1;j<=n;++j){
		printf("%3d",j);//输出最后一行 
	}
	printf("\n");
	return 0; 
	 
} 
