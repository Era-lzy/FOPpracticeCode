//������ƻ���ϰ�⼯��3��ѭ���������3.2�����ϰ��26��
//Сѧ���ľžű���ʽ����д���򣬴�ӡ֮

#include<stdio.h>

int main(){
	int i,j;//�������˷�����������
	int n=9;//�������˷������ֵ 
	int product;//�����������ĳ˻�
	
	for(i=1;i<=n;++i){
		printf("%3d",i);//�����һ�� 
		for(j=1;j<=i;++j){
			product=i*j;//����˻� 
			printf("%3d",product);//����˻� 
		}
		printf("\n");//���У�׼�������һ�� 
	}
	printf("  *");
	for(j=1;j<=n;++j){
		printf("%3d",j);//������һ�� 
	}
	printf("\n");
	return 0; 
	 
} 
