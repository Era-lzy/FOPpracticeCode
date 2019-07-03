//程序设计基础习题集第3章3.1基本练习第47题第1小题
//编写程序求1/1+1/2+1/3+...+1/n,调和级数前n项和

#include<stdio.h>

int main(){
	int n;//调和级数项数
	double sum=0.0;//调和级数的和,初始化为0.0 
	int i;//循环中间变量
	
	printf("Please input n.\n");
	printf("n=");
	scanf("%d",&n);//输入n的值
	
	for(i=1;i<=n;++i){
		sum=sum+1.0/i;//注意1.0，转换为浮点数，整数相除结果还是整数 
	}
	printf("The result is %lf",sum);
	return 0; 
} 
