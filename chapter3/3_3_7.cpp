//������ƻ���ϰ�⼯��3��ѭ���������3.3�ۺ���ϰ��7��
//��д���򣬴��ն˶���һ��ʮ�������������������ʮ��������Ҫ��
//(a)��ʮ����������ȷ����������������������Ϣָ������Ϊ��������ʵ��
//(b)�������������Ϣ 

#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX16 20  //���������ʮ��������������ַ��� 

int main(){
	
	char str[MAX16];//����洢ʮ�����������ַ�����
	//int MAX10;
	//MAX10=(int)((MAX16+1.0)*log10(16.0))+1;//����ת��Ϊʮ������֮�󣬿�����Ҫ������ַ��� 
	//char str10[MAX10];//����洢ʮ������������ 
	int n;//����������ַ��ĸ���
	int i;//����ѭ������
	//int int_num=0;//������������λ������ʼ��Ϊ0
	int dot_pos=0;//����С����λ�ã���ʼ��Ϊ0
	int dot_num=0;//����С�������������ʼ��Ϊ0 
	//int dec_num=0;//����С������λ������ʼ��Ϊ0
	double dou10=0.0;//����ת��Ϊʮ���ƺ����,�����ʵ������ʼ��Ϊ0.0 
	int int10=0;//����ת��Ϊʮ���ƺ�������������������ʼ��Ϊ0 
	double doutemp;//�����м���� 
	int inttemp;
	printf("Please input the number.\n");
	rewind(stdin);//��ջ���
	scanf("%s",str);//�����ַ�
	n=strlen(str);//��������ַ���
	for(i=0;i<n;++i){
		if(('0'<=str[i]&&str[i]<='9') || ('A'<=str[i]&&str[i]<='F') || str[i]=='.' ){//���������ȷ 
			//���ҳ�С�����λ��
			if('.'==str[i]){
				++dot_num;//��¼С�������� 
			}
		}
		else{//������벻��ȷ
			printf("The input is ERROR1.\n");
			return 0; 
		}	
	}
	if(2<=dot_num){//������в�ֹһ��С���� 
		printf("The input is ERROR2.\n");
		return 0; 
	} 
	
	//��������ȷ��ǰ����
	//����С����λ��
	i=0;
	while(str[i]!='.' && i<n){
		++i;
		++dot_pos;//��¼С����λ�ã�ע��˴���0��ʼ���� 
	}
	if(dot_pos<n-1){//���С���������һλ֮ǰ���֣�˵����ʵ��
		for(i=0;i<dot_pos;++i){//С����֮ǰ����������
			if('0'<=str[i] && str[i]<='9'){//�����0-9������
				doutemp=str[i]-'0';
				inttemp=dot_pos-i-1; 
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
			else if('A'<=str[i] && str[i]<='F'){//�����A-F����ĸ
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			} 
		}
		for(i=dot_pos+1;i<n;++i){//С����֮��Ĳ���
			if('0'<=str[i] && str[i]<='9'){//�����0-9������
				doutemp=str[i]-'0';
				inttemp=dot_pos-i;//���� 
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
			else if('A'<=str[i] && str[i]<='F'){//�����A-F����ĸ
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i;//����
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			} 
		}
		//ת����ϣ���ʼ���
		printf("The result is %lf\n",dou10);
		printf("It is real number.\n");//ʵ��
		return 0; 
	}
	else{//������ 
		for(i=0;i<dot_pos;++i){
			if('0'<=str[i] && str[i]<='9'){//�����0-9������
				doutemp=str[i]-'0';
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp);
			}
			else if('A'<=str[i] && str[i]<='F'){//�����A-F����ĸ
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
					
		}
		//ת����ϣ����ת��Ϊint��
		int10=(int)dou10;
		printf("The result is %d\n",int10);
		printf("It is integer.\n");//����
		return 0; 
	}
	
} 
