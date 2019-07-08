//程序设计基础习题集第5章使用数组组织数据5.3综合练习第4题
//已知有n个整数组成的序列放在数组a中。从a中任意抽出k个元素构成的序列u称为从a中抽取的长度为k的子序列
//若u是递增的，则称u为从a中抽取的长度为k的递增子序列
//编写程序，求从a中可能抽取的最长的递增子序列的长度

#include<stdio.h>
 
 int main(){
 	int n;//数组a的元素个数 
 	int k=1;//序列u的元素个数,初始化为1
	int temp; 
 	n=20;//
 	int MININT=-2014;
 	int a[n+1]={MININT,2,4,7,5,3,9,6,8,1,13,7,11,45,18,9,21,76,43,56,74};
 	//int u[n];
 	int b[n+1]={0};//b[j]用来记录数组a[]中长度为j的递增子序列中末位元素的最小值
	b[0]=a[0];
	b[1]=a[1]; 
 	int i,j;
 	
	/*
	printf("Please input the values for each element in array a[]\n");
 	for(i=0;i<n;++i){
 		scanf("%d",&a[i]);//输入数组a中各个元素的值 
	}
	*/
	for(i=2;i<=n;i++){
		if(a[i]>=b[k]){
			++k;//递增子序列长度加1
			b[k]=a[i]; 
		}
		else{
			for(j=k;j>0;j--){
				if(b[j-1]<=a[i]&&a[i]<b[j]){
					b[j]=a[i];//更新b[j]处的值 
				}
			}
		} 
		
	}
	printf("The values of each element in array a[] is\n");
	for(i=0;i<n+1;i++){
		printf("%3d",a[i]);
	}
	//printf("\n");
	printf("\nThe values of each element in array b[] is\n");
	for(i=0;i<n+1;i++){
		printf("%3d",b[i]);
	}
	//注意此时数组b[]的各个元素的值并不代表数组a[]中长度为k的递增子序列各个元素的值
	//比如长度为k的递增子序列中并不一定包含长度为1时的递增子序列的元素
	//当a[]中最后一个元素最小时，则b[1]=a[n+1],但是此时长度为k的递增子序列中并不一定包含a[n+1]
	printf("\nThe k=%d\n",k);
	
	int c[k+1];//存储此时数组a[]中长度为k的一个递增子序列
	c[0]=MININT;
	c[k]=b[k];
	temp=k;
	int ctemp;
	for(i=n;i>0;--i){		
		if(b[temp-1]<=a[i] && a[i]<b[temp] && a[i]<c[temp]){//c[temp-1]应该满足的条件
			--temp;
			c[temp]=a[i];
			//continue; 
		} 
	}
	printf("\nThe values of each element in array c[] is\n");
	for(i=0;i<=k;++i){
		printf("%3d",c[i]);
	} 
	
	
	 
	
	
	
	
	return 0;
	 
	 
 	
 } 
 
