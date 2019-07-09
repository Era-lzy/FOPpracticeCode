//程序设计基础习题集第6章使用指针6.2提高练习第9题
//用指针访问数组元素。编函数，把给定数组中的n个整数反序存放

#include<stdio.h>

void ant(int* a,int n);//把给定数组a中的n个整数反序存放 

int main(){
	int n=12;//数组a所含元素的个数 
	int a[n]={1,2,3,4,5,6,7,8,9,10,11,12};
	int i;//循环变量 
	ant(a,n);//将数组a中存放的整数反序存放
	for(i=0;i<n;++i){
		printf("%3d",*(a+i));
	}
	return 0; 
	
}

void ant(int* a,int n){
	int i;//循环变量
	int temp;
	for(i=0;i<n/2;++i){
		temp=*(a+i);
		*(a+i)=*(a+n-1-i);
		*(a+n-1-i)=temp;//注意应该时*(a+n-1-i)而不是*(a+n-i)
		//temp=a[i];
		//a[i]=a[n-1-i];
		//a[n-1-i]=temp;//这个跟上面时一样的 
	} 
} 
 
