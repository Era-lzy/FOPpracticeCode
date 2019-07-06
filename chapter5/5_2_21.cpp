//程序设计基础习题集第5章使用数组组织数据5.1基本练习第21题
//编一个函数，用“逐步增加递增子序列”法对整数型数组A进行排序

/*
注意有关排序的算法 
*/ 

#include<stdio.h>

int main(){
	int n;//数组a的元素个数
	printf("Please input n\n");
	printf("n=");
	scanf("%d",&n);
	
	int a[n];//参与排序的数组
	int i,j;//循环中间变量
	int temp;//中间变量
	
	 
	for(i=0;i<n;++i){
		a[i]=n-i;//给a[]中各元素赋初值
		printf("%3d",a[i]); 
	}
	printf("\n");
	
	//下面对a[]中元素进行递增排序
	 

	for(i=0;i<n-1;++i){
		for(j=0;j<n-1-i;++j){//经过一次内循环，找到一个最大值 
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	
	printf("The latter a[] is\n");
	for(i=0;i<n;++i){
		printf("%3d",a[i]);//输出排序后的数组a 
	}
	return 0; 
	 
} 
 
