//������ƻ���ϰ�⼯��7�µݹ�������7.1������ϰ��6��
//n�����õ¶���ʽ�������£���һ������ʵ��֮
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
	float pp;//�����
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
