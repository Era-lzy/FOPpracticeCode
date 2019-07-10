//程序设计基础习题集第8章使用结构体和共用体组织数据8.1基本练习第3题
//设计表示复数的结构体类型，给出实现复数加法和乘法运算的函数

#include<stdio.h>

struct comp{//定义复数complex number 
	float real;//实部real part 
	float imag;//虚部imaginary part 
};

comp addc(comp a,comp b);//复数加法函数的声明
comp subc(comp a,comp b);//复数减法的声明 
comp multc(comp a,comp b);//复数乘法函数的声明
comp divc(comp a,comp b);//复数除法的声明 


 int main(){
 	
 	comp a,b;
 	comp sum,diff,prod,quo;//定义复数的和、差、积、商
	printf("Please input the real part of the complex number a\na.real=");
	scanf("%f",&a.real);
	printf("Please input the inaginary part of the complex number a\na.imag=");
	scanf("%f",&a.imag);
	printf("Please input the real part of the complex number b\nb.real=");
	scanf("%f",&b.real);
	printf("Please input the inaginary part of the complex number b\nb.imag=");
	scanf("%f",&b.imag);
	
	sum=addc(a,b);
	diff=subc(a,b);
	prod=multc(a,b);
	quo=divc(a,b);
	
	printf("The sum of a and b is\n");
	printf("sum.real=%f,sum.imag=%f\n",sum.real,sum.imag);
	printf("The diffenence of a and b is\n");
	printf("diff.real=%f,diff.imag=%f\n",diff.real,diff.imag);
	printf("The product of a and b is\n");
	printf("prod.real=%f,prod.imag=%f\n",prod.real,prod.imag);
	printf("The quotient of a and b is\n");
	printf("quo.real=%f,quo.imag=%f\n",quo.real,quo.imag);
	 
 }
 
comp addc(comp a,comp b){//定义复数的加法 
	comp sum;
	sum.real=a.real+b.real;
	sum.imag=a.imag+b.imag;
	return sum;
}

comp subc(comp a,comp b){//定义复数的减法
	comp diff;
	diff.real=a.real-b.real;
	diff.imag=a.imag-b.imag;
	return diff; 
} 

comp multc(comp a,comp b){//定义复数的乘法 
	comp prod;
	prod.real=a.real*b.real -a.imag *b.imag;
	prod.imag=a.real *b.imag +b.real *a.imag ;
	return prod; 
}

comp divc(comp a,comp b){//定义复数的除法
	comp quo;
	quo.real=(a.real*b.real+a.imag*b.imag)/(b.real*b.real+b.imag*b.imag);
	quo.imag=(b.real*a.imag-a.real*b.imag)/(b.real*b.real+b.imag*b.imag);
	return quo; 
}
 
 
