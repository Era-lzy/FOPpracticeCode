//������ƻ���ϰ�⼯��3��ѭ���������3.1������ϰ82��\
//��д�����õ������ⷽ��
//2*X^3+0.5*X^2-X+0.093=0

//ע���������˼·,�ڿα�P75-76ҳ�н���
//ע��ȡ�ĳ�ʼ����Ҫ������������ 

#include<stdio.h>
#include<math.h>

int main(){
	double x0=0.09;//ȡһ����ʼ��1.0
	double x=0.09;//������� 
	double eps=1e-6;//ȡ����Ϊ10^(-6)
	
	do{
		x0=x; 
		x=2*pow(x,3.0)+0.5*pow(x,2.0)+0.093;
	}
	while(fabs(x-x0)>eps);
	//while( ((x-x0)>e) || ((x-x0)<-e));  //�����˼ӷֺ� 
	//ע��abs()����Ϊint�ͺ������亯��ԭ��Ϊint abs(int x);,����Ϊ������x�ľ���ֵ
	//�˴�����ʹ��fabs()���������ֵ 
	printf("The result is %lf.\n",x0);
	return 0;
} 