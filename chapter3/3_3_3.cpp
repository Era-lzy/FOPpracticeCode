//程序设计基础习题集第3章循环程序设计3.3综合练习第3题
//编写程序，求给定两个正整数u,v的最大公因数。
//提示：采用欧几里得辗转相除法

//scanf("%d",&u) 别忘了加取地址符号& 

#include<stdio.h>
#include<math.h>

int main(){
	int u,v;//定义待输入的两个数
	int max,min;//定义输入的两个数的较大值和较小值
	int gcd;//定义最大公约数 
	 
	int temp;//定义临时中间变量
	printf("Please input the first number u.\n");
	printf("u=");
	scanf("%d",&u);//输入u,别忘了加取地址符号& 
	printf("Please input the second number v.\n");
	printf("v=");
	scanf("%d",&v);//输入v
	max=u;
	min=v;//初始化 
	if(v>max){
		max=v;
	}
	if(u<min){
		min=u;
	} 
	if(max%min == 0){
		gcd=min;
		printf("The greatest common divisor of %d and %d is %d\n",u,v,gcd);
		return 0;
	}
	temp=max%min;
	while(temp != 0){
		max=min;
		min=temp;
		temp=max%min;
	}
	gcd=min;
	printf("The greatest common divisor of %d and %d is %d\n",u,v,gcd);
	return 0;
	 
} 
