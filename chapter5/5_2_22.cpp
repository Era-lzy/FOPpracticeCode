//程序设计基础习题集第5章使用数组组织数据5.2提高练习第22题
//编写程序，在数组a上进行对半检索

#include<stdio.h>

int main(){
	int n=12;//数组元素个数
	int a[n];//参与检索的数组 
	int i;//循环变量
	int j;//标记当前检索位置 
	int lower=0;//记录检索区间下界，初值是0 
	int upper=n-1;//记录检索区间上界，初值是n-1
	int key;//需要检索的关键字 
	//先给数组a[]赋初值 
	for(i=0;i<n;++i){//给数组元素赋初值，a[]中各元素已经按递增序列排列好 
		a[i]=2*i+1;
	}
	printf("Please input key\nkey=");
	scanf("%d",&key);//输入需要检索的关键字
	j=(lower+upper)/2;
	while(key!=a[j] && lower<=upper){
		if(key>a[j]){
			lower=j+1;
		}
		else if(key<a[j]){
			upper=j-1;			
		}
		j=(lower+upper)/2;
	}
	if(key==a[j]){
		printf("a[%d]=%d\n",j,key);
		return 0;
	}
	if(upper<lower){
		printf("Searching %d in a[] is failed.\n",key);//查找失败 
		return 0;
	}
	
	 
} 
