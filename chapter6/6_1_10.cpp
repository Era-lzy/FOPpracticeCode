//������ƻ���ϰ�⼯��6��ʹ��ָ��6.1������ϰ��10��
//��������������ʹ��ָ���������Ԫ�أ��Ѹ������ַ�������ĸ˳�����������
//char *name[]={"basic","programming","great wall","language","computer"};

//ע������������бȽ϶�ûŪ���׵�ϸ�ڣ�ֵ���ٿ����� 

#include<stdio.h>

int str_cmp(char* a,char* b);//�Ƚ������ַ����Ĵ�С�����������ȷ���0�����a>b,����1�����򷵻�-1
int str_len(char* c);//�����ַ�������c�ĳ��� 
 


int main(){
	char na1[]="basic",na2[]="programming",na3[]="great wall",na4[]="language",na5[]="computer";
	//char *name[]={"basic","programming","great wall","language","computer"};
	int n=5;
	char *name[n];//��¼ԭʼ���ַ���
	char *name2[n];//��¼����С˳���ź�����ַ�������С����
	char *ptemp;//ָ��char�����ַ�����ָ�룬��ʱ���� 
	int i,j,k;//ѭ������
	int d[n];//������¼�ĸ��ַ���Ӧ������������ַ���С���������ͳ���±� 
	name[0]=na1;//���ַ���"basic"���׵�ַ����name[0] 
	name[1]=na2;
	name[2]=na3;
	name[3]=na4;
	name[4]=na5;
	for(i=0;i<n;++i){
		name2[i]=name[i];//��name[]�д洢��ָ�븴�Ƶ�name2[]�� 
	}
	
	for(i=0;i<n-1;++i){//�ȱȽϸ����ַ����Ĵ�С
		for(j=0;j<n-1-i;++j){
			if( str_cmp(name2[j],name2[j+1]) == 1 ){//���name2[j]ָ����ַ�������name2[j+1]ָ����ַ���
				ptemp=name2[j];
				name2[j]=name2[j+1];
				name2[j+1]=ptemp;//����name2[j]��name2[j+1]��ֵ 
			} 
		} 
	}
	for(i=0;i<n;++i){
		printf("%s\n",name2[i]);//�����С��������ĸ����ַ��� 
	} 
	
	
	//nameΪָ�����飬name��Ԫ��ָ������ַ������׵�ַ 
	//int n=5;//ע��Ӧ����ô��name��ʾ 
	
	///char **p;//����ָ���ַ���ָ���ָ�����
	//p=&(name[0]);//��p=&(name[0]),pָ��name[]����ĵ�һ��Ԫ��name[]
	/* 
	int i=0;
	do{
		//printf("%s ",*p);
		printf("%s\n",name[i]);
		//++(*p);
		++i;
	}while(i <n);//ע����pӦ����ô��ʾ 
	printf("\n");
	
	*/ 
	
	
	return 0;
		
} 

int str_len(char* c){
	//�����ַ�������c�ĳ���
	char* p=c;//��ָ���������c�������ѭ�� 
	int i=0;
	while(*p != '\0'){//δ���ַ���������־
		++i;//��¼�ַ����ĳ��ȣ�����'\0')
		++p; 
	}
	return i; 
}

int str_cmp(char* a,char* b){
	int n1=str_len(a);//��¼�ַ�������a�ĳ��� 
	int n2=str_len(b);//��¼�ַ�������b�ĳ��� 
	
	int nmin,nmax;//��¼�ַ�������a,b������Ԫ�ظ����Ľ�Сֵnmin�ͽϴ�ֵnmax 
	nmin=(n1<n2)? n1:n2;
	nmax=(n1>n2)? n1:n2;
	int i;//ѭ������
	//n=(str_len(a)<str_len(b))?str_len(a):str_len(b);
	for(i=0;i<nmin;++i){
		if(*(a+i)>*(b+i)){
			return 1;
		}
		else if(*(a+i)<*(b+i)){
			return -1;
		}
	}
	if(n1==n2){
		return 0;
	}
	if(nmax==n1){
		return 1;
	}
	else if(nmax==n2){
		return -1;
	}                
} 
