//程序设计技术习题集第3章循环程序设计3.1基本练习第19题
//编写一个程序，计算f(N)=R1!+R2!+...+Rn!.其中N=R1R2...Rn
//例如，f(12)=1!+2!


#include<stdio.h>

int main(){
	
	int N;				//定义输入量正整数N
	int temp; 			//定义专门用来参与循环的中间变量 
	int n=0;			//定义输入量N的位数n，初始化为1 
	//int R[];			//用来存储N的各个位数上的数,目前不知道多少位 
	int fn=0;			//定义最后的结果f(N),初始化为0 
	int i,j;			//定义循环变量 
	
	printf("Please input N.\n");
	printf("N=");
	scanf("%d",&N);		//输入N
	//n=log10(N)+1;	//用以10为底的对数函数求N的整数位数
	
	temp=N;				//用temp代替N参与循环，防止N的值发生改变 
	while(temp!=0){
		++n;
		temp=temp/10;
	}
	//printf("n=%d,N=%d,temp=%d.\n",n,N,temp);//在这之前没错 
	
	temp=N;				//用temp代替N参与循环 
	int R[n+1];			//用来存储N的各个位数上的数
	for(i=n-1;i>=0;--i){ //注意不要习惯性地写成++i,此处i应该递减 
		R[i]=temp%10;
		temp=temp/10; 
	} 
	
	/* 
	for(i=0;i<n;++i){
		printf("R[%d]=%d.\n",i+1,R[i]);
	}
	*/ 
	
	for(i=0;i<=n-1;++i){
		for(j=1,temp=1;j<=R[i];++j){
			temp=temp*j;
		}
		fn=fn+temp;
	}
	
	/* 
	for(i=0;i<n;++i){
		printf("R[%d]=%d.\n",i+1,R[i]);
	}
	*/ 
	
	printf("The result is %d.\n",fn); 	
	return 0;
} 
