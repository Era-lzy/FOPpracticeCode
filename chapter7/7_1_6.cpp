//程序设计基础习题集第7章递归程序设计7.1基本练习第6题
//n次勒让德多项式定义如下，编一个函数实现之
/*
p[n](x)=1,n=0;
p[n](x)=x,n=1;
p[n](x)=((2*n-1)*x*p[n-1](x)-(n-1)*p[n-2](x))/n n>1;
*/ 

#include<stdio.h>
#include<math.h>

float p(int n,float x);

int main(){
	int n;
	float x;
	float pp;
	printf("Please input n\nn=");
	scanf("%d",&n);
	printf("Please input x\nx=");
	scanf("%f",&x);
	pp=p(n,x);
	printf("The result is %f\n",pp);
	return 0;	
}

float p(int n,float x){
	float pp;//最后结果
	if(0==n){
		pp=1.0;
	}
	else if(1==n){
		pp=x;
	}
	else{
		pp=( (2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x) )/n;
	}
	return pp;
	 
}
