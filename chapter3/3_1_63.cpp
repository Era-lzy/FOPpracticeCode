//������ƻ���ϰ�⼯��3��ѭ���������3.1������ϰ��63��
//��д���򣬴�ӡ100���ڵ�����

#include<stdio.h>
#include<math.h>

int prime_number(int a);
//�ж�һ�������ǲ�������������Ƿ���1��������Ƿ���0 

int main(){
	int n=100;//�������ķ�Χ������Ϊ100
	int i;//ѭ���ı���
	int j=0;//������¼�����ĸ�������ʼ��Ϊ0 
	
	for(i=1;i<=n;++i){
		if(prime_number(i)==1){
			++j;//����������1 
			printf("The number %d is prime number.\n",i);
		}
	}
	
	printf("\nThe number of prime number in %d is %d.\n",n,j); 
	
	return 0; 
} 

int prime_number(int a){
	//�����ж�һ�������Ƿ�Ϊ�����ĺ���������ǣ�����1�����򷵻�0
	int ii;//ѭ������
	int jj;//���� 
	int flag=1;//����������־��Ĭ��Ϊ1�������� 
	
	if(1==a){
		flag=0; 
		return flag;//1�������� 
	}
	if(2==a || 3==a){
		return flag;
	} 
	
	if(3<a){
		for(ii=2;ii<=(a/2);++ii){
			if(a%ii==0){
				flag=0;
			}			
		}
	}
	return flag; 
}
