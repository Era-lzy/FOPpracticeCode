//������ƻ���ϰ�⼯��5��ʹ��������֯����5.2�����ϰ��22��
//��д����������a�Ͻ��ж԰����

#include<stdio.h>

int main(){
	int n=12;//����Ԫ�ظ���
	int a[n];//������������� 
	int i;//ѭ������
	int j;//��ǵ�ǰ����λ�� 
	int lower=0;//��¼���������½磬��ֵ��0 
	int upper=n-1;//��¼���������Ͻ磬��ֵ��n-1
	int key;//��Ҫ�����Ĺؼ��� 
	//�ȸ�����a[]����ֵ 
	for(i=0;i<n;++i){//������Ԫ�ظ���ֵ��a[]�и�Ԫ���Ѿ��������������к� 
		a[i]=2*i+1;
	}
	printf("Please input key\nkey=");
	scanf("%d",&key);//������Ҫ�����Ĺؼ���
	j=(lower+upper)/2;
	while(key!=a[j] && lower<=upper){
		if(key>a[j]){
			lower=j+1;
		}
		else if(key<a[j]){
			upper=j-1;			
		}
		j=(lower+upper)/2;
	}
	if(key==a[j]){
		printf("a[%d]=%d\n",j,key);
		return 0;
	}
	if(upper<lower){
		printf("Searching %d in a[] is failed.\n",key);//����ʧ�� 
		return 0;
	}
	
	 
} 
