//������ƻ���ϰ�⼯��6��ʹ��ָ��6.1������ϰ��10��
//��������������ʹ��ָ���������Ԫ�أ��Ѹ������ַ�������ĸ˳�����������
//char *name[]={"basic","programming","great wall","language","computer"};

#include<stdio.h>

int main(){
	char *name[]={"basic","programming","great wall","language","computer"};
	//nameΪָ�����飬name��Ԫ��ָ������ַ������׵�ַ 
	int n=5;//ע��Ӧ����ô��name��ʾ 
	
	///char **p;//����ָ���ַ���ָ���ָ�����
	//p=&(name[0]);//��p=&(name[0]),pָ��name[]����ĵ�һ��Ԫ��name[]
	int i=0;
	do{
		//printf("%s ",*p);
		printf("%s\n",name[i]);
		//++(*p);
		++i;
	}while(i <n);//ע����pӦ����ô��ʾ 
	printf("\n");
	return 0;
		
} 
