//������Ƽ���ϰ�⼯��3��ѭ���������3.1������ϰ��19��
//��дһ�����򣬼���f(N)=R1!+R2!+...+Rn!.����N=R1R2...Rn
//���磬f(12)=1!+2!


#include<stdio.h>

int main(){
	
	int N;				//����������������N
	int temp; 			//����ר����������ѭ�����м���� 
	int n=0;			//����������N��λ��n����ʼ��Ϊ1 
	//int R[];			//�����洢N�ĸ���λ���ϵ���,Ŀǰ��֪������λ 
	int fn=0;			//�������Ľ��f(N),��ʼ��Ϊ0 
	int i,j;			//����ѭ������ 
	
	printf("Please input N.\n");
	printf("N=");
	scanf("%d",&N);		//����N
	//n=log10(N)+1;	//����10Ϊ�׵Ķ���������N������λ��
	
	temp=N;				//��temp����N����ѭ������ֹN��ֵ�����ı� 
	while(temp!=0){
		++n;
		temp=temp/10;
	}
	//printf("n=%d,N=%d,temp=%d.\n",n,N,temp);//����֮ǰû�� 
	
	temp=N;				//��temp����N����ѭ�� 
	int R[n+1];			//�����洢N�ĸ���λ���ϵ���
	for(i=n-1;i>=0;--i){ //ע�ⲻҪϰ���Ե�д��++i,�˴�iӦ�õݼ� 
		R[i]=temp%10;
		temp=temp/10; 
	} 
	
	/* 
	for(i=0;i<n;++i){
		printf("R[%d]=%d.\n",i+1,R[i]);
	}
	*/ 
	
	for(i=0;i<=n-1;++i){
		for(j=1,temp=1;j<=R[i];++j){
			temp=temp*j;
		}
		fn=fn+temp;
	}
	
	/* 
	for(i=0;i<n;++i){
		printf("R[%d]=%d.\n",i+1,R[i]);
	}
	*/ 
	
	printf("The result is %d.\n",fn); 	
	return 0;
} 
