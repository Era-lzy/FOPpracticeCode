//������ƻ���ϰ�⼯��5��ʹ��������֯����5.1������ϰ��90��
//���о���A[m][p]��B[p][n]����һ����������������˻�C[m][n]

#include<stdio.h>

int main(){
	int m=10;
	int p=9;
	int n=8;
	int A[m][p];
	int B[p][n];
	int C[m][n];
	int i,j,k;//�����м�ѭ������
	int temp=0;//�м����, 
	
	for(i=0;i<m;++i){//�ȸ�A�и�Ԫ�ظ�ֵ
		for(j=0;j<p;++j){//һ��һ�и�ֵ 
			A[i][j]=i+j; 
		} 
	}
	for(i=0;i<p;++i){//�ȸ�B�и�Ԫ�ظ�ֵ
		for(j=0;j<n;++j){//һ��һ�и�ֵ 
			B[i][j]=i+j; 
		} 
	}
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			temp=0;
			for(k=0;k<p;++k){
				temp=temp+A[i][k]*B[k][j]; 
			}
			C[i][j]=temp;			
		}
	}
	
	//����ֱ����A,B,C�и�Ԫ�أ���֤�����д�Ƿ���ȷ
	printf("A=\n");
	for(i=0;i<m;++i){
		for(j=0;j<p;++j){
			printf("%5d",A[i][j]);
		}
		printf("\n");
	}
	printf("B=\n");
	for(i=0;i<p;++i){
		for(j=0;j<n;++j){
			printf("%5d",B[i][j]);
		}
		printf("\n");
	}
	printf("C=\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%5d",C[i][j]);
		}
		printf("\n");
	}
	return 0; 
	
} 
