//������ƻ���ϰ�⼯��5��ʹ��������֯����5.1������ϰ��21��
//��һ���������á������ӵ��������С���������������A��������

/*
ע���й�������㷨 
*/ 

#include<stdio.h>

int main(){
	int n;//����a��Ԫ�ظ���
	printf("Please input n\n");
	printf("n=");
	scanf("%d",&n);
	
	int a[n];//�������������
	int i,j;//ѭ���м����
	int temp;//�м����
	
	 
	for(i=0;i<n;++i){
		a[i]=n-i;//��a[]�и�Ԫ�ظ���ֵ
		printf("%3d",a[i]); 
	}
	printf("\n");
	
	//�����a[]��Ԫ�ؽ��е�������
	 

	for(i=0;i<n-1;++i){
		for(j=0;j<n-1-i;++j){//����һ����ѭ�����ҵ�һ�����ֵ 
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	
	printf("The latter a[] is\n");
	for(i=0;i<n;++i){
		printf("%3d",a[i]);//�������������a 
	}
	return 0; 
	 
} 
 
