//������ƻ���ϰ�⼯��2�·�֧�������2.2�����ϰ��2��
//����deta�ĸ������������3��ϵ������һԪ���η��̵�a*X^2+b*X+c=0�ĸ�

#include<stdio.h>
#include<math.h>



struct Evaluation
{
	double x1;
	double x2;
};//����Evaluation�ṹ�壬���������x1��x2
 
//Evaluation evaluate(double a,double b,double c);
//��ֵ�����������ǵü�;�ֺ� 
//Ҳ������main���������������

int main(){
	double a,b,c,deta;//����a,b,c,�б�ʽdeta 
	struct Evaluation eva;//�������������Ľṹ��Evaluation���� 
	printf("Please input a,b and c.\n");
	//printf("You could input 'a=,b=,c=' ");
	//scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);//����a,b,c��ֵ
	printf("a=\n");
	scanf("%lf",&a);
	
	if(0==a){
		printf("'a' should not be 0.\n");
		printf("Please input 'a' again.\n");
		printf("a=\n"); 
		scanf("%lf",&a);
	}
	
	printf("b=\n");
	scanf("%lf",&b);
	
	printf("c=\n");
	scanf("%lf",&c);
	
	
	deta=pow(b,2)-4*a*c;
	if(deta<0){
		printf("The equation hasn't evaluation.\n'");
		return 0;
	}
	else if(0<=deta){
		eva.x1=(-b+sqrt(deta))/(2*a);
		eva.x2=(-b-sqrt(deta))/(2*a);
		printf("The result are x1=%lf and x2=%lf\n",eva.x1,eva.x2);//����������
		return 0; 
	}
	
	
	
	
	
	
		
	//eva=evaluate(a,b,c);//���㷽�̵ĸ���ʹ�ýṹ�壬������������ 
	
	
} 


/*
Evaluation evaluate(double a,double b,double c){
	Evaluation eva;//������ṹ�����
	double deta;//�����б�ʽ
	if(0==a) {
		printf(" 'a' should not be 0.\n");
	}
	deta=pow(b,2)-4*a*c;
	if(deta<0){
		printf("The equation hasn't evaluation.\n'");
	}
	else if(0<=deta){
		eva.x1=(-b+sqrt(deta))/(2*a);
		eva.x2=(-b-sqrt(deta))/(2*a);
	}
	return eva;
	
}
*/

