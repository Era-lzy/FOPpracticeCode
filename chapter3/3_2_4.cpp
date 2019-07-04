//程序设计基础习题集第3章循环程序设计3.2提高练习第4题
//设计一个模拟计算器的程序，
//设该计算器只能做加、减、乘、除运算，并且运算符不带优先级也没有括号

//注意C语言中判断是否相等用==，不是=

//学会用调试和Internet 
//fflush(stdin);//清除输入缓冲区 
/*
在每个最后不带\n的printf后面加fflush(stdout);
在每个不想受接收缓冲区旧内容影响的scanf前面加rewind(stdin); 
*/ 


/*PROGRAM Calculator*/

#include<stdio.h>

int main(){
	float a;//定义参与运算的第一个数字
	char  w;//定义运算符
	float b;//定义参与运算的第二个数字
	float c;//定义最后的运算结果 
	printf("Please input the first number.\n");
	printf("a=");
	scanf("%f",&a);//输入参与运算的第一个数字
	printf("Please input the operator.\n");
	//printf("w=");
	fflush(stdin);//清除输入缓冲区 
	scanf("%c",&w);
	
	//printf("The operator is %c.\n",w);
	
	while(w!='+' && w!='-' && w!='*' && w!='/'){
		printf("Please input the right operator.\n");
		printf("You could input '+','-','*' and '/'\n");
		fflush(stdin);//清除输入缓冲区
		scanf("%c",&w); 
	}
	
	//不知道为什么，while循环里面的内容会提前输出出来
	//需要清楚输入缓冲区 
	
	//注意C语言中判断是否相等用==，不是= 
	
	printf("Please input the secand number.\n");
	printf("b=");
	scanf("%f",&b);
	while(w=='/'&&b==0.0){
	printf("The number 0 could not be divisor.\n");
	printf("Please input the divisor again.\n");
	printf("b=");
	scanf("%f",&b);//零不能做除数 
	}
	switch(w){
	case'+':c=a+b;break;
	case'-':c=a-b;break;
	case'*':c=a*b;break;
	case'/':c=a/b;break;
	}   //switch 

	
	printf("%.2f%c%.2f=%.2f",a,w,b,c);
	return 0; 
	
}
