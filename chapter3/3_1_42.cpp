//������ƻ���ϰ�⼯��3��ѭ���������3.1������ϰ��42��
//ĳ��yy�������������yy�ܱ�4�����������ܱ�100��������yy�ܱ�400����
//��д��������һ����ݣ�������Ժ��n������

#include<stdio.h>
#include<math.h>

int main(){
	int A;//����������
	int n;//���A�Ժ��n������
	int yy;//�ж��ǲ���������м����
	int i;//ѭ�����м����
	int flag=0;//����һ�������־flag��1��ʾ�����꣬0��ʾ�������꣬��ʼ��Ϊ0
	int temp;//����һ��ѭ������temp
	int j=0;//������¼�Ѿ��ҵ����������, 
	
	printf("Please input the year.\n");
	scanf("%d",&A);//�������A
	printf("Please input the number n.\n");
	scanf("%d",&n);//����n
	
	int ny[n+1];//���屣�����A֮��n�����������
	
	temp=A+1;//��temp����A����ѭ������ʼ��tempΪA�ĺ�һ�� 
	do{
		if( (temp%4==0 && temp%100!=0) || temp%400==0){
			
			
			ny[j]=temp;//���temp������,�ͽ����¼��ny[]������
			++j;//׼����¼��һ������
			 
		} 
		++temp;//������������� 
	}
	while(j<n);
	//�˴������˼�;�ֺ�
	//ע��ѭ����������Ҫһֱ���㣬�����Ǹ�׼������ѭ��ʱ������ 
	
	
	printf("The %d bissextile after %d year are \n",n,A);
	for(i=0;i<=n-1;++i){
		printf("%d\n",ny[i]);
	}
	
	return 0; 
	
	/* 
	//�����ж����A�Ƿ�������
	if( (A%4==0 && A%100!=0) || A%400==0 ){
		flag=1;//AΪ���꣬��flagΪ1
		printf("The %d year is bissextile.\n",A);//bissextile ���� 
		return 0; 
	} 
	else{
		printf("The %d year is not bissextile.\n",A);
		return 0;
	}
	*/ 
	 
}
 
