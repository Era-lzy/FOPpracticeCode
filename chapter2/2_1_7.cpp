//������ƻ���ϰ�⼯2.1������ϰ��7С��
//��д���������ѧ�еķ��ź���sign(x)

#include<stdio.h>
int sign(double x);//�������ź���sign(x)
//ע�⺯�������ͺ�������Ҫ����һ�� 


int main(){
	double x;//��������ֵ
	int signx;//�������ֵ
	printf("please input the number x.\n");
	scanf("%lf",&x);//�������ֵ����x
	//ע��scanf()�������÷�
	//����˫�����ͱ�����ֵҪ�ø�ʽ������lf��
	signx=sign(x);//�ѷ��ź�����ֵ�����������
	printf("The result is %d\n",signx);//������
	return 0;
	
}

int sign(double x){
	if(x>0){
		return 1;
	}
	else if(x<0)
		return -1;
	else
		return 0;
}
