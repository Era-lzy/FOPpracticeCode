//������ƻ���ϰ�⼯��3��ѭ���������3.2�����ϰ��4��
//���һ��ģ��������ĳ���
//��ü�����ֻ�����ӡ������ˡ������㣬����������������ȼ�Ҳû������

//ע��C�������ж��Ƿ������==������=

//ѧ���õ��Ժ�Internet 
//fflush(stdin);//������뻺���� 
/*
��ÿ����󲻴�\n��printf�����fflush(stdout);
��ÿ�������ܽ��ջ�����������Ӱ���scanfǰ���rewind(stdin); 
*/ 


/*PROGRAM Calculator*/

#include<stdio.h>

int main(){
	float a;//�����������ĵ�һ������
	char  w;//���������
	float b;//�����������ĵڶ�������
	float c;//�������������� 
	printf("Please input the first number.\n");
	printf("a=");
	scanf("%f",&a);//�����������ĵ�һ������
	printf("Please input the operator.\n");
	//printf("w=");
	fflush(stdin);//������뻺���� 
	scanf("%c",&w);
	
	//printf("The operator is %c.\n",w);
	
	while(w!='+' && w!='-' && w!='*' && w!='/'){
		printf("Please input the right operator.\n");
		printf("You could input '+','-','*' and '/'\n");
		fflush(stdin);//������뻺����
		scanf("%c",&w); 
	}
	
	//��֪��Ϊʲô��whileѭ����������ݻ���ǰ�������
	//��Ҫ������뻺���� 
	
	//ע��C�������ж��Ƿ������==������= 
	
	printf("Please input the secand number.\n");
	printf("b=");
	scanf("%f",&b);
	while(w=='/'&&b==0.0){
	printf("The number 0 could not be divisor.\n");
	printf("Please input the divisor again.\n");
	printf("b=");
	scanf("%f",&b);//�㲻�������� 
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
