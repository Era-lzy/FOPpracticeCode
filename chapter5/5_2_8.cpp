//程序设计基础习题集第5章使用数组组织数据5.2提高练习第8题
//编写程序，打印杨辉三角的前10行




#include<stdio.h>

int main(){
	
	int n;//需要打印的行数
	printf("Please input the number n\n");
	printf("n=");
	scanf("%d",&n);
	int i,j;//循环的中间变量
	int a[n+1][2*n+1];//定义存储杨辉三角的数组，空格处取值为0
	for(i=0,j=0;j<2*n+1;++j){//给第一行元素赋初值
		if(j==n){
			a[i][j]=1;
		}
		else{
			a[i][j]=0;
		} 
	}
	
	for(i=1;i<n+1;++i){//从第二行开始赋值 
		for(j=0;j<2*n+1;++j){
			if((i+j==n) || (j-i==n)){
				a[i][j]=1;//边界处赋值为1 
			}
			else if((n<i+j )&& (j-i<n)){//杨辉三角内部 
				a[i][j]=a[i-1][j-1]+a[i-1][j+1];
			}
			else{
				a[i][j]=0;//其他元素赋值为0 
			} 
		}
	}
	//赋值完毕，开始输出
	for(i=0;i<n+1;++i){
		for(j=0;j<2*n+1;++j){
			if(0==a[i][j]){
				printf("   ");//与下面的%3d相呼应，打印3个空格 
			}
			else{
				printf("%3d",a[i][j]);
			}
		}
		printf("\n");//一行打印完毕，换行开始打印下一行 
	}
	return 0; 
} 
