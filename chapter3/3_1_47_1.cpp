//������ƻ���ϰ�⼯��3��3.1������ϰ��47���1С��
//��д������1/1+1/2+1/3+...+1/n,���ͼ���ǰn���

#include<stdio.h>

int main(){
	int n;//���ͼ�������
	double sum=0.0;//���ͼ����ĺ�,��ʼ��Ϊ0.0 
	int i;//ѭ���м����
	
	printf("Please input n.\n");
	printf("n=");
	scanf("%d",&n);//����n��ֵ
	
	for(i=1;i<=n;++i){
		sum=sum+1.0/i;//ע��1.0��ת��Ϊ�������������������������� 
	}
	printf("The result is %lf",sum);
	return 0; 
} 
