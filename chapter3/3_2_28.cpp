//������ƻ���ϰ�⼯��3��ѭ���������3.2�����ϰ��28��
//��ѭ�������Ʒֱ��ӡ��ͼ3.12��ͼ3.13��ͼ3.14��ʾ��ʽ

//ע�⵱�н϶�����һ����ʱ�򣬿��԰�����������������꣬Ȼ��ֱ��else����ʣ�µ���� 

#include<stdio.h>
 

void print312(void);//��ӡ��ͼ3.12��ʾ��ʽ 
void print313(void);//��ӡ��ͼ3.13��ʾ��ʽ 
void print314(void);//��ӡ��ͼ3.14��ʾ��ʽ 

int main(){
	printf("\n");
	
	print312();//��ӡ��ͼ3.12��ʾ��ʽ
	printf("\n");
	
	print313();//��ӡ��ͼ3.13��ʾ��ʽ
	printf("\n");
	
	print314();//��ӡ��ͼ3.14��ʾ��ʽ
	return 0;
		
	} 
	
	void print312(){
		
		int i,j;//����ѭ�����к���
		int star1,star2;//����ѭ������ʼ���� 
		int end1,end2;//����ѭ������ֹ���� 
		//���ȴ�ӡͼ3.12��ʾ��ʽ
		star1=(int)'A';//��ߵ���ʼ
		star2=(int)'N';//�ұߵ���ʼ 
		end1=(int)('M');//�е�ѭ�� 
		end2=(int)('Z');//�е�ѭ��,ע���м���˸�*�� 
		for(i=star1;i<=end1;++i){//�е�ѭ�� 
		    for(j=star1;j<=end1;++j){
			    if(j<i){
				printf(" ");
			}
			else{
				printf("%c",j);
			}
		}
		printf("*");//�������м��*�� 
		//��ߵ�ѭ�����������濪ʼ�ұߵ�ѭ��
		for(j=star2;j<=end2;++j){
			if(j<=end2-i+star1){
				printf("%c",j);
			}
			else{
				printf(" ");
			}
		}
		//�ұ�ѭ�����������滻��
		printf("\n"); 
		}
		
		//����ĸ��ѭ������,���濪ʼ���һ�е�ѭ�� 
		 for(i=star1;i<=end1;++i){
		 	printf(" "); 
		 }
		 printf("*");
		 for(i=star2;i<=end2;++i){
		 	printf(" ");
		 }
		 printf("\n"); 
	}
	
	
 
	void print313(){
		
		
		int i,j;//ѭ�����м����
		
		int temp;//��ʱ���� 
		for(i=1;i<=11;++i){
			for(j=1;j<=29;++j){
				if(i<=6){//�ϰ벿�� 
					if(j<=9){
						temp=i+j-2+'A';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
						}
						printf("%c",temp); 
					}
					else if(10<=j && j<=20 ){
						
						/* 
						if(i<=5){
							
							for(k=1;k<=6-i;++k){
								printf(" ");//�����ո� 
							}
							
							for(k=1;k<=2*i-1;++k){
								temp=i-1+'A';
								if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
								}
								printf("%c",temp);
							}
						 
							for(k=1;k<=6-i;++k){
								printf(" ");//�����ո� 
							}
						}
						if(i==6){
							for(k=1;k<=2*i-1;++k){
								temp=i-1+'A';
								if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
								}
								printf("%c",temp);
							}
						}*/ //ע���������ظ���ӡ�����ĸ��һ��j��ӡһ�Σ�
						if(i<=5){
							if(j<=15-i){
								printf(" ");
							}
							else if(16-i<=j && j<=14+i){
								temp=i-1+'A';
								if(temp>'I'){
									temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
								}
								printf("%c",temp);
							}
							else{
								printf(" ");
							}
						}
						if(i==6){
							temp=i-1+'A';
							if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
							}
							printf("%c",temp);
						}
					
						
					}
					else{
						temp=i+j-21+'A';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
						}
						printf("%c",temp);
					}
				
				}
				else if(i>6){
					if(j<=9){
						temp=-i+j+5+'F';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
						}
						printf("%c",temp);
					}
					else if(10<=j && j<=20){
						/*
						for(k=1;k<=i-6;++k){
							printf(" ");//�����ո� 
						}
						for(k=1;k<=23-2*i;++k){
							temp=-i+'F'+6;
							if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
							}
							printf("%c",temp);
						}*/ //ע���������ظ���δ�ӡ�м����ĸ��һ��j��ӡһ�Σ�
						
						if(j<=i+3){
							printf(" ");
						}
						else if(i+4<=j && j<=26-i){
							temp=-i+'F'+6;
							if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
							}
							printf("%c",temp);
						}
						else{
							printf(" ");
						}
						 
					}
					else{
						temp=-i+j+'F'-14;
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//�����ֻ� 
						}
						printf("%c",temp);
					} 
				}
					 
			}//�ڲ�ѭ������
			printf("\n");//��������ַ� 
		}//���ѭ�� 
	} 
	
	void print314(){
		int i,j;//����ѭ������ 
		int temp;//������ʱ�м����
		for(i=1;i<=7;++i){//���ѭ�� 
			for(j=1;j<=14;++j){//�ڲ�ѭ�� 
				if(1==i){
					if(j<=7){
						temp='A'+j-1;
						printf("%c",temp);
					}
					else if(j<=10){
						printf(" ");
					}
					else if(11==j){
						printf("%c",'A');
					}
					else{
						printf(" ");
					}
				}//��һ�д�ӡ���
				
				if(2<=i && i<=3){
					if(1==j){
						temp='A'+i-1;
						printf("%c",temp);
					}
					else if(2<=j && j<=6){
						printf(" ");
					}
					else if(7==j){
						temp='A'+i-2;
						printf("%c",temp);
					}
					else if(j<=11-i){
						printf(" ");
					}
					else if(12-i==j){
						temp='A'+i-1;
						printf("%c",temp);
					}
					else if(j<=9+i){
						printf(" ");
					}
					else if(10+i==j){
						temp='A'+i-1;
						printf("%c",temp);
					}
					else{
						printf(" ");
					} 
				}//��2��3�д�ӡ���
				if(4==i){
					if(1==j){
						printf("%c",'D');
					}
					else if(7==j){
						printf("%c",'C');
					}
					else if(8==j || 14==j ){
						printf("%c",'D');
					}
					else{
						printf(" ");
					}
				}//��4�д�ӡ���
				if(5<=i && i<=6){
					if(1==j){
						temp='A'+i-1;
						printf("%c",temp);
					}
					else if(7==j){
						temp='A'+i-2;
						printf("%c",temp);
					}
					else if(i+4==j || i+j==18){
						temp='A'-i+7;
						printf("%c",temp);
					}
					else{
						printf(" ");
					}
					  
				}//��5��6�д�ӡ���
				if(7==i){
						if(1==j){
							printf("%c",'G');
						}
						else if(2<=j && j<=7){
							temp='A'+j-2;
							printf("%c",temp);
						}
						else if(11==j){
							printf("%c",'A');
						}
						else{
							printf(" ");
						} 
					}//��7�д�ӡ��� 
			}//�ڲ�ѭ��
		
		printf("\n");//һ�д�ӡ��ϣ����� 
		}//���ѭ�� 
		
	} 
		 
	
	
	
	 

