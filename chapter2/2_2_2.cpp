//程序设计基础习题集第2章分支程序设计2.2提高练习第2题
//考虑deta的各种情况，输入3个系数，求一元二次方程的a*X^2+b*X+c=0的根

#include<stdio.h>
#include<math.h>



struct Evaluation
{
	double x1;
	double x2;
};//定义Evaluation结构体，存放两个根x1和x2
 
//Evaluation evaluate(double a,double b,double c);
//求值函数声明，记得加;分号 
//也可以在main函数里面进行声明

int main(){
	double a,b,c,deta;//定义a,b,c,判别式deta 
	struct Evaluation eva;//定义存放两个根的结构体Evaluation变量 
	printf("Please input a,b and c.\n");
	//printf("You could input 'a=,b=,c=' ");
	//scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);//输入a,b,c的值
	printf("a=\n");
	scanf("%lf",&a);
	
	if(0==a){
		printf("'a' should not be 0.\n");
		printf("Please input 'a' again.\n");
		printf("a=\n"); 
		scanf("%lf",&a);
	}
	
	printf("b=\n");
	scanf("%lf",&b);
	
	printf("c=\n");
	scanf("%lf",&c);
	
	
	deta=pow(b,2)-4*a*c;
	if(deta<0){
		printf("The equation hasn't evaluation.\n'");
		return 0;
	}
	else if(0<=deta){
		eva.x1=(-b+sqrt(deta))/(2*a);
		eva.x2=(-b-sqrt(deta))/(2*a);
		printf("The result are x1=%lf and x2=%lf\n",eva.x1,eva.x2);//输入两个根
		return 0; 
	}
	
	
	
	
	
	
		
	//eva=evaluate(a,b,c);//计算方程的跟，使用结构体，返回两个参数 
	
	
} 


/*
Evaluation evaluate(double a,double b,double c){
	Evaluation eva;//定义根结构体变量
	double deta;//定义判别式
	if(0==a) {
		printf(" 'a' should not be 0.\n");
	}
	deta=pow(b,2)-4*a*c;
	if(deta<0){
		printf("The equation hasn't evaluation.\n'");
	}
	else if(0<=deta){
		eva.x1=(-b+sqrt(deta))/(2*a);
		eva.x2=(-b-sqrt(deta))/(2*a);
	}
	return eva;
	
}
*/

