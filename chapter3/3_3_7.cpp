//程序设计基础习题集第3章循环程序设计3.3综合练习第7题
//编写程序，从终端读入一个十六进制数，把它翻译成十进制数，要求
//(a)若十六进制数正确，则输出翻译结果，并输出信息指出该数为整数还是实数
//(b)否则输出错误信息 

#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX16 20  //定义输入的十六进制数的最大字符数 

int main(){
	
	char str[MAX16];//定义存储十六进制数的字符数组
	//int MAX10;
	//MAX10=(int)((MAX16+1.0)*log10(16.0))+1;//定义转换为十进制数之后，可能需要的最大字符数 
	//char str10[MAX10];//定义存储十进制数的数组 
	int n;//定义输入的字符的个数
	int i;//定义循环变量
	//int int_num=0;//定义整数部分位数，初始化为0
	int dot_pos=0;//定义小数点位置，初始化为0
	int dot_num=0;//定义小数点的数量，初始化为0 
	//int dec_num=0;//定义小数部分位数，初始化为0
	double dou10=0.0;//定义转换为十进制后的数,如果是实数，初始化为0.0 
	int int10=0;//定义转化为十进制后的数，如果是整数，初始化为0 
	double doutemp;//定义中间变量 
	int inttemp;
	printf("Please input the number.\n");
	rewind(stdin);//清空缓存
	scanf("%s",str);//输入字符
	n=strlen(str);//求输入的字符数
	for(i=0;i<n;++i){
		if(('0'<=str[i]&&str[i]<='9') || ('A'<=str[i]&&str[i]<='F') || str[i]=='.' ){//如果输入正确 
			//先找出小数点的位置
			if('.'==str[i]){
				++dot_num;//记录小数点数量 
			}
		}
		else{//如果输入不正确
			printf("The input is ERROR1.\n");
			return 0; 
		}	
	}
	if(2<=dot_num){//如果含有不止一个小数点 
		printf("The input is ERROR2.\n");
		return 0; 
	} 
	
	//在输入正确的前提下
	//先找小数点位置
	i=0;
	while(str[i]!='.' && i<n){
		++i;
		++dot_pos;//记录小数点位置，注意此处从0开始计数 
	}
	if(dot_pos<n-1){//如果小数点在最后一位之前出现，说明是实数
		for(i=0;i<dot_pos;++i){//小数点之前的整数部分
			if('0'<=str[i] && str[i]<='9'){//如果是0-9的数字
				doutemp=str[i]-'0';
				inttemp=dot_pos-i-1; 
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
			else if('A'<=str[i] && str[i]<='F'){//如果是A-F的字母
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			} 
		}
		for(i=dot_pos+1;i<n;++i){//小数点之后的部分
			if('0'<=str[i] && str[i]<='9'){//如果是0-9的数字
				doutemp=str[i]-'0';
				inttemp=dot_pos-i;//负数 
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
			else if('A'<=str[i] && str[i]<='F'){//如果是A-F的字母
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i;//负数
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			} 
		}
		//转换完毕，开始输出
		printf("The result is %lf\n",dou10);
		printf("It is real number.\n");//实数
		return 0; 
	}
	else{//是整数 
		for(i=0;i<dot_pos;++i){
			if('0'<=str[i] && str[i]<='9'){//如果是0-9的数字
				doutemp=str[i]-'0';
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp);
			}
			else if('A'<=str[i] && str[i]<='F'){//如果是A-F的字母
				doutemp=str[i]-'A'+10.0;
				inttemp=dot_pos-i-1;
				dou10=dou10+doutemp*pow(16.0,inttemp); 
			}
					
		}
		//转换完毕，最后转换为int型
		int10=(int)dou10;
		printf("The result is %d\n",int10);
		printf("It is integer.\n");//整数
		return 0; 
	}
	
} 
