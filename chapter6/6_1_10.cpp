//程序设计基础习题集第6章使用指针6.1基本练习第10题
//设有如下声明，使用指针访问数组元素，把给定的字符串按字母顺序排序并输出。
//char *name[]={"basic","programming","great wall","language","computer"};

#include<stdio.h>

int main(){
	char *name[]={"basic","programming","great wall","language","computer"};
	//name为指针数组，name中元素指向各个字符串的首地址 
	int n=5;//注意应该怎么用name表示 
	
	///char **p;//定义指向字符串指针的指针变量
	//p=&(name[0]);//即p=&(name[0]),p指向name[]数组的第一个元素name[]
	int i=0;
	do{
		//printf("%s ",*p);
		printf("%s\n",name[i]);
		//++(*p);
		++i;
	}while(i <n);//注意用p应该怎么表示 
	printf("\n");
	return 0;
		
} 
