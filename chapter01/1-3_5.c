#include<stdio.h>
#include<math.h>
#define Length 500 //���򳤶� ,��λ��m 
#define Width 300 //�����ȣ���λ��m 
#define Area 12000 //��Ҫ�����ĵؿ���������λ��m^2 
int main(){
	//�ڳ�500�ף���300�׵ĵ����ڱ���120000ƽ���׵ĵؿ飬��������ֲ�����̻����Ŀ��
	float x;//�����̻������ 
	float deta; //�����б�ʽ 
	//float Length=5;
	deta=pow(Length+Width,2)/4+Area-Length*Width;//����η��̵��б�ʽ��С
	//ע������ʱ����Ҫ��pow������������^���ţ���C���������ǰ�λ�������� 
	printf("Length is %d\n",Length);
	if(deta<0) 
	{
	//return -1;//����б�ʽС���㣬���ش���}
	printf("Fault\n");
	};
	
	x = (Length+Width)/4+sqrt(deta) /2;//���ݹ�ʽ��ʵ���������̻������ 
	printf("The width is %f m.\n",x);//����̻�����ȣ���λ���� 
	return 0;
	 
}


