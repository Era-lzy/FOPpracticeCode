//程序设计基础习题集第3章循环程序设计3.1基本练习第63题
//编写程序，打印100以内的素数

#include<stdio.h>
#include<math.h>

int prime_number(int a);
//判断一个整数是不是素数，如果是返回1，如果不是返回0 

int main(){
	int n=100;//求素数的范围，设置为100
	int i;//循环的变量
	int j=0;//用来记录素数的个数，初始化为0 
	
	for(i=1;i<=n;++i){
		if(prime_number(i)==1){
			++j;//素数个数加1 
			printf("The number %d is prime number.\n",i);
		}
	}
	
	printf("\nThe number of prime number in %d is %d.\n",n,j); 
	
	return 0; 
} 

int prime_number(int a){
	//定义判断一个整数是否为素数的函数，如果是，返回1，否则返回0
	int ii;//循环变量
	int jj;//备用 
	int flag=1;//定义素数标志，默认为1，是素数 
	
	if(1==a){
		flag=0; 
		return flag;//1不是素数 
	}
	if(2==a || 3==a){
		return flag;
	} 
	
	if(3<a){
		for(ii=2;ii<=(a/2);++ii){
			if(a%ii==0){
				flag=0;
			}			
		}
	}
	return flag; 
}
