//������ƻ���ϰ�⼯��3��ѭ���������3.2�����ϰ��5С��
//��д���򣬻�����y=f(x)=e^(-x)*sin(2*pi*x)��[0,2]�����ϵ�ͼ��

#include<stdio.h>
#include<math.h>
#define PI 3.141592653589 //����Բ����piֵ
#define E  2.17828 		  //������Ȼ����e��ֵ	

double fx(double x);//��������������ֱ�Ӵ������ 

int main(){
	//���崹ֱ����ΪX�ᣬˮƽ����ΪY�� 
	double eps=5e-2;//���廭ͼ�ľ���
	double xmin=0.0;//�����������
	double xmax=2.0;//���������յ� 
	int xn=(int)((xmax-xmin)/eps);//����ѭ������n
	double xrange=xmax-xmin;//�����Ա��������С
	double yrange;//���庯��ֵ�������С  
	int yn;//���庯��ֵ��ѭ��ϵ�� 
	int i,j;//����ѭ������
	double ymin=fx(0.0),ymax=fx(0.0);//��ʼ������ֵ����ֵ
	double ytemp;//���庯������ֵ���м����
	double xtemp; 
	//�ȼ��㺯��ֵ�����ֵ����Сֵ
	for(i=0;i<=xn;++i){
		xtemp=xmin+(double)i/(double)xn*xrange;//��ʱ�Ա����Ĵ�С 
		ytemp=fx(xtemp);//����ֵ�Ĵ�С
		//ע��Ӧ�ô���xtemp,��Ҫ����i 
		if(ytemp<ymin){
			ymin=ytemp;//��¼��Сֵ 
		}
		else if(ytemp>ymax){
			ymax=ytemp;//��¼���ֵ 
		}
	}
	
	
	yrange=ymax-ymin;
	 
	for(i=0;i<=xn;++i){
		xtemp=xmin+(double)i/(double)xn*xrange;//��ʱ�Ա����Ĵ�С
		ytemp=fx(xtemp);
		yn=(int)((ytemp-ymin)/yrange*xn);//����Ӧ���ںδ����ͼ��.
		//�Ѽ�����ת��Ϊint��,ע����Ҫת���������Ľ�� 
		for(j=0;j<=yn;++j){
			printf(" ");//����ո� 
		}
		printf("*\n");//���������ͼ��.�ǵû��У� 
		
		/* 
		for(;j<=xn;++j){
			printf(" ");//��ʵ���Բ������ 
		}
		printf("\n");
		*/ 
	}
	 
	/*
	printf("\n");
	printf("ymax=%lf\n",ymax);
	printf("ymin=%lf\n",ymin);
	printf("xn=%d\n",xn);
	printf("yn=%d\n",yn);
	printf("yrange=%lf\n",yrange);
	printf("xrange=%lf\n",xrange);
	printf("ytemp=%lf\n",ytemp);
	printf("xtemp=%lf\n",xtemp); 
	printf("eps=%lf\n",eps);
	*/    
	
	return 0; 
} 

double fx(double x){
	double yy=pow(E,-x)*sin(2.0*PI*x);
	return yy;
} 
