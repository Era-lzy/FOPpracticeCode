//������ƻ���ϰ�⼯��4���ӳ����ģ�黯�������4.1������ϰ��18��
//��д�������һ������ֵ

#include<stdio.h>
#include<math.h>

double f(double v,double w);
double p(double u,double x);
double y(double x);

int main(){
	double x;//��������
	
	double yy;//���庯��ֵ 
	printf("Please input the number x\n");
	printf("x=");
	
	rewind(stdin);
	scanf("%lf",&x);
	
	////rewind(stdin);//ˢ�»���
	//scanf("%lf",&v);
	
	yy=y(x);
	
	printf("The result is %lf\n",yy);//�������ֵ 
	return 0;
	 

	
	
	
} 


double f(double v,double w){
	double ff;//�������ֵ
	ff=(w+v)/(7*v);
	return ff;//���غ���ֵ 
}

double p(double u,double x){
	double pp;//�������ֵ
	double temp;//�м���� 
	temp=f(0.3*u,x+u)+u/2;
	pp=temp/(2*x);
	return pp;//���غ���ֵ 
}

double y(double x){
	double yy;//�������ֵ
	double temp1,temp2;//�����м���
	temp1=(p(x,x)*p(x,x)+5*x)*p(x+2,x);
	temp2=p(x+5,x)-sqrt(x);
	yy=temp1/temp2; 
} 
