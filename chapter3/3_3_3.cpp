//������ƻ���ϰ�⼯��3��ѭ���������3.3�ۺ���ϰ��3��
//��д�������������������u,v�����������
//��ʾ������ŷ�����շת�����

//scanf("%d",&u) �����˼�ȡ��ַ����& 

#include<stdio.h>
#include<math.h>

int main(){
	int u,v;//����������������
	int max,min;//����������������Ľϴ�ֵ�ͽ�Сֵ
	int gcd;//�������Լ�� 
	 
	int temp;//������ʱ�м����
	printf("Please input the first number u.\n");
	printf("u=");
	scanf("%d",&u);//����u,�����˼�ȡ��ַ����& 
	printf("Please input the second number v.\n");
	printf("v=");
	scanf("%d",&v);//����v
	max=u;
	min=v;//��ʼ�� 
	if(v>max){
		max=v;
	}
	if(u<min){
		min=u;
	} 
	if(max%min == 0){
		gcd=min;
		printf("The greatest common divisor of %d and %d is %d\n",u,v,gcd);
		return 0;
	}
	temp=max%min;
	while(temp != 0){
		max=min;
		min=temp;
		temp=max%min;
	}
	gcd=min;
	printf("The greatest common divisor of %d and %d is %d\n",u,v,gcd);
	return 0;
	 
} 
