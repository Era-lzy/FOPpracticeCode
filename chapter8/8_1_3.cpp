//������ƻ���ϰ�⼯��8��ʹ�ýṹ��͹�������֯����8.1������ϰ��3��
//��Ʊ�ʾ�����Ľṹ�����ͣ�����ʵ�ָ����ӷ��ͳ˷�����ĺ���

#include<stdio.h>

struct comp{//���帴��complex number 
	float real;//ʵ��real part 
	float imag;//�鲿imaginary part 
};

comp addc(comp a,comp b);//�����ӷ�����������
comp subc(comp a,comp b);//�������������� 
comp multc(comp a,comp b);//�����˷�����������
comp divc(comp a,comp b);//�������������� 


 int main(){
 	
 	comp a,b;
 	comp sum,diff,prod,quo;//���帴���ĺ͡��������
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
 
comp addc(comp a,comp b){//���帴���ļӷ� 
	comp sum;
	sum.real=a.real+b.real;
	sum.imag=a.imag+b.imag;
	return sum;
}

comp subc(comp a,comp b){//���帴���ļ���
	comp diff;
	diff.real=a.real-b.real;
	diff.imag=a.imag-b.imag;
	return diff; 
} 

comp multc(comp a,comp b){//���帴���ĳ˷� 
	comp prod;
	prod.real=a.real*b.real -a.imag *b.imag;
	prod.imag=a.real *b.imag +b.real *a.imag ;
	return prod; 
}

comp divc(comp a,comp b){//���帴���ĳ���
	comp quo;
	quo.real=(a.real*b.real+a.imag*b.imag)/(b.real*b.real+b.imag*b.imag);
	quo.imag=(b.real*a.imag-a.real*b.imag)/(b.real*b.real+b.imag*b.imag);
	return quo; 
}
 
 
