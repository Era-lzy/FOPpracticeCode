//������ƻ���ϰ�⼯��5��ʹ��������֯����5.3�ۺ���ϰ��4��
//��֪��n��������ɵ����з�������a�С���a��������k��Ԫ�ع��ɵ�����u��Ϊ��a�г�ȡ�ĳ���Ϊk��������
//��u�ǵ����ģ����uΪ��a�г�ȡ�ĳ���Ϊk�ĵ���������
//��д�������a�п��ܳ�ȡ����ĵ��������еĳ���

#include<stdio.h>
 
 int main(){
 	int n;//����a��Ԫ�ظ��� 
 	int k=1;//����u��Ԫ�ظ���,��ʼ��Ϊ1
	int temp; 
 	n=20;//
 	int MININT=-2014;
 	int a[n+1]={MININT,2,4,7,5,3,9,6,8,1,13,7,11,45,18,9,21,76,43,56,74};
 	//int u[n];
 	int b[n+1]={0};//b[j]������¼����a[]�г���Ϊj�ĵ�����������ĩλԪ�ص���Сֵ
	b[0]=a[0];
	b[1]=a[1]; 
 	int i,j;
 	
	/*
	printf("Please input the values for each element in array a[]\n");
 	for(i=0;i<n;++i){
 		scanf("%d",&a[i]);//��������a�и���Ԫ�ص�ֵ 
	}
	*/
	for(i=2;i<=n;i++){
		if(a[i]>=b[k]){
			++k;//���������г��ȼ�1
			b[k]=a[i]; 
		}
		else{
			for(j=k;j>0;j--){
				if(b[j-1]<=a[i]&&a[i]<b[j]){
					b[j]=a[i];//����b[j]����ֵ 
				}
			}
		} 
		
	}
	printf("The values of each element in array a[] is\n");
	for(i=0;i<n+1;i++){
		printf("%3d",a[i]);
	}
	//printf("\n");
	printf("\nThe values of each element in array b[] is\n");
	for(i=0;i<n+1;i++){
		printf("%3d",b[i]);
	}
	//ע���ʱ����b[]�ĸ���Ԫ�ص�ֵ������������a[]�г���Ϊk�ĵ��������и���Ԫ�ص�ֵ
	//���糤��Ϊk�ĵ����������в���һ����������Ϊ1ʱ�ĵ��������е�Ԫ��
	//��a[]�����һ��Ԫ����Сʱ����b[1]=a[n+1],���Ǵ�ʱ����Ϊk�ĵ����������в���һ������a[n+1]
	printf("\nThe k=%d\n",k);
	
	int c[k+1];//�洢��ʱ����a[]�г���Ϊk��һ������������
	c[0]=MININT;
	c[k]=b[k];
	temp=k;
	int ctemp;
	for(i=n;i>0;--i){		
		if(b[temp-1]<=a[i] && a[i]<b[temp] && a[i]<c[temp]){//c[temp-1]Ӧ�����������
			--temp;
			c[temp]=a[i];
			//continue; 
		} 
	}
	printf("\nThe values of each element in array c[] is\n");
	for(i=0;i<=k;++i){
		printf("%3d",c[i]);
	} 
	
	
	 
	
	
	
	
	return 0;
	 
	 
 	
 } 
 
