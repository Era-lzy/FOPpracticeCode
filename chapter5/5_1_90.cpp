//程序设计基础习题集第5章使用数组组织数据5.1基本练习第90题
//设有矩阵A[m][p]、B[p][n]，编一个函数，求两矩阵乘积C[m][n]

#include<stdio.h>

int main(){
	int m=10;
	int p=9;
	int n=8;
	int A[m][p];
	int B[p][n];
	int C[m][n];
	int i,j,k;//定义中间循环变量
	int temp=0;//中间变量, 
	
	for(i=0;i<m;++i){//先给A中各元素赋值
		for(j=0;j<p;++j){//一行一行赋值 
			A[i][j]=i+j; 
		} 
	}
	for(i=0;i<p;++i){//先给B中各元素赋值
		for(j=0;j<n;++j){//一行一行赋值 
			B[i][j]=i+j; 
		} 
	}
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			temp=0;
			for(k=0;k<p;++k){
				temp=temp+A[i][k]*B[k][j]; 
			}
			C[i][j]=temp;			
		}
	}
	
	//下面分别输出A,B,C中各元素，验证程序编写是否正确
	printf("A=\n");
	for(i=0;i<m;++i){
		for(j=0;j<p;++j){
			printf("%5d",A[i][j]);
		}
		printf("\n");
	}
	printf("B=\n");
	for(i=0;i<p;++i){
		for(j=0;j<n;++j){
			printf("%5d",B[i][j]);
		}
		printf("\n");
	}
	printf("C=\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%5d",C[i][j]);
		}
		printf("\n");
	}
	return 0; 
	
} 
