//程序设计基础习题集第6章使用指针6.1基本练习第10题
//设有如下声明，使用指针访问数组元素，把给定的字符串按字母顺序排序并输出。
//char *name[]={"basic","programming","great wall","language","computer"};

//注意这道题里面有比较多没弄明白的细节，值得再看几遍 

#include<stdio.h>

int str_cmp(char* a,char* b);//比较两个字符串的大小，如果两者相等返回0，如果a>b,返回1，否则返回-1
int str_len(char* c);//计算字符串数组c的长度 
 


int main(){
	char na1[]="basic",na2[]="programming",na3[]="great wall",na4[]="language",na5[]="computer";
	//char *name[]={"basic","programming","great wall","language","computer"};
	int n=5;
	char *name[n];//记录原始的字符串
	char *name2[n];//记录按大小顺序排好序的字符串，从小到大
	char *ptemp;//指向char类型字符串的指针，临时变量 
	int i,j,k;//循环变量
	int d[n];//用来记录哪个字符串应该先输出，即字符串小的先输出，统计下标 
	name[0]=na1;//将字符串"basic"的首地址赋给name[0] 
	name[1]=na2;
	name[2]=na3;
	name[3]=na4;
	name[4]=na5;
	for(i=0;i<n;++i){
		name2[i]=name[i];//将name[]中存储的指针复制到name2[]中 
	}
	
	for(i=0;i<n-1;++i){//先比较各个字符串的大小
		for(j=0;j<n-1-i;++j){
			if( str_cmp(name2[j],name2[j+1]) == 1 ){//如果name2[j]指向的字符串大于name2[j+1]指向的字符串
				ptemp=name2[j];
				name2[j]=name2[j+1];
				name2[j+1]=ptemp;//交换name2[j]和name2[j+1]的值 
			} 
		} 
	}
	for(i=0;i<n;++i){
		printf("%s\n",name2[i]);//输出从小到大排序的各个字符串 
	} 
	
	
	//name为指针数组，name中元素指向各个字符串的首地址 
	//int n=5;//注意应该怎么用name表示 
	
	///char **p;//定义指向字符串指针的指针变量
	//p=&(name[0]);//即p=&(name[0]),p指向name[]数组的第一个元素name[]
	/* 
	int i=0;
	do{
		//printf("%s ",*p);
		printf("%s\n",name[i]);
		//++(*p);
		++i;
	}while(i <n);//注意用p应该怎么表示 
	printf("\n");
	
	*/ 
	
	
	return 0;
		
} 

int str_len(char* c){
	//计算字符串数组c的长度
	char* p=c;//用指针变量代替c参与后续循环 
	int i=0;
	while(*p != '\0'){//未到字符串结束标志
		++i;//记录字符串的长度（不含'\0')
		++p; 
	}
	return i; 
}

int str_cmp(char* a,char* b){
	int n1=str_len(a);//记录字符串数组a的长度 
	int n2=str_len(b);//记录字符串数组b的长度 
	
	int nmin,nmax;//记录字符串数组a,b中所含元素个数的较小值nmin和较大值nmax 
	nmin=(n1<n2)? n1:n2;
	nmax=(n1>n2)? n1:n2;
	int i;//循环变量
	//n=(str_len(a)<str_len(b))?str_len(a):str_len(b);
	for(i=0;i<nmin;++i){
		if(*(a+i)>*(b+i)){
			return 1;
		}
		else if(*(a+i)<*(b+i)){
			return -1;
		}
	}
	if(n1==n2){
		return 0;
	}
	if(nmax==n1){
		return 1;
	}
	else if(nmax==n2){
		return -1;
	}                
} 
