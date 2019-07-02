//程序设计基础习题集第3章循环程序设计3.1基本练习第42题
//某年yy是闰年的条件：yy能被4整除，但不能被100整除；或yy能被400整除
//编写程序，输入一个年份，求该年以后的n个闰年

#include<stdio.h>
#include<math.h>

int main(){
	int A;//待输入的年份
	int n;//年份A以后的n个闰年
	int yy;//判断是不是闰年的中间变量
	int i;//循环的中间变量
	int flag=0;//设置一个闰年标志flag，1表示是闰年，0表示不是闰年，初始化为0
	int temp;//定义一个循环变量temp
	int j=0;//用来记录已经找到的闰年个数, 
	
	printf("Please input the year.\n");
	scanf("%d",&A);//输入年份A
	printf("Please input the number n.\n");
	scanf("%d",&n);//输入n
	
	int ny[n+1];//定义保存年份A之后n个闰年的数组
	
	temp=A+1;//用temp代替A参与循环，初始化temp为A的后一年 
	do{
		if( (temp%4==0 && temp%100!=0) || temp%400==0){
			
			
			ny[j]=temp;//如果temp是闰年,就将其记录到ny[]数组中
			++j;//准备记录下一个闰年
			 
		} 
		++temp;//别忘了增加年份 
	}
	while(j<n);
	//此处别忘了加;分号
	//注意循环条件是需要一直满足，而不是刚准备跳出循环时的条件 
	
	
	printf("The %d bissextile after %d year are \n",n,A);
	for(i=0;i<=n-1;++i){
		printf("%d\n",ny[i]);
	}
	
	return 0; 
	
	/* 
	//首先判断年份A是否是闰年
	if( (A%4==0 && A%100!=0) || A%400==0 ){
		flag=1;//A为闰年，置flag为1
		printf("The %d year is bissextile.\n",A);//bissextile 闰年 
		return 0; 
	} 
	else{
		printf("The %d year is not bissextile.\n",A);
		return 0;
	}
	*/ 
	 
}
 
