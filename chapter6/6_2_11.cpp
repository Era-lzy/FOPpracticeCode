//程序设计基础习题集第6章使用指针6.2提高篇第11题 
//编写程序，读入月份数，输出该月份英文名称。要求分别用一维数组和4*3指针数组
//保存一年12个月份的英文名称

#include<stdio.h>

void emonth1(int month);//用一维数组存放月份英文名称
void emonth2(int month);//用4*3指针数组存放月份英文名称 

int main(){
	int month;
	for(month=1;month<13;++month){
		emonth1(month);
		emonth2(month);
	}
	
	//printf("Please input the month\n");
	//scanf("%d",&month);
	//emonth1(month);
	//emonth2(month);
	return 0;	
}

void emonth1(int month){
	char s[86]="January\0February\0March\0April\0May\0June\0July\0August\0September\0October\0November\0December";
	//定义存储12个月份的一维字符串数组
	switch(month){
		case 1:printf("%s\n",&s[0]);break;
		case 2:printf("%s\n",&s[8]);break;
		case 3:printf("%s\n",&s[17]);break;
		case 4:printf("%s\n",&s[23]);break;
		case 5:printf("%s\n",&s[29]);break;
		case 6:printf("%s\n",&s[33]);break;
		case 7:printf("%s\n",&s[38]);break;
		case 8:printf("%s\n",&s[43]);break;
		case 9:printf("%s\n",&s[50]);break;
		case 10:printf("%s\n",&s[60]);break;
		case 11:printf("%s\n",&s[68]);break;
		case 12:printf("%s\n",&s[77]);break;
		dufault:printf("Please input right month\n");
	} 
}

void emonth2(int month){
	char s1[]="January",s2[]="February",s3[]="March",s4[]="April",s5[]="May",
	s6[]="June",s7[]="July",s8[]="August",s9[]="September",s10[]="October",s11[]="November",s12[]="December"; 
	char* s[4][3]={s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12};
	//char* s[4][3]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	switch(month){
		case 1:printf("%s\n",s[0][0]);break;
		case 2:printf("%s\n",s[0][1]);break;
		case 3:printf("%s\n",s[0][2]);break;
		case 4:printf("%s\n",s[1][0]);break;
		case 5:printf("%s\n",s[1][1]);break;
		case 6:printf("%s\n",s[1][2]);break;
		case 7:printf("%s\n",s[2][0]);break;
		case 8:printf("%s\n",s[2][1]);break;
		case 9:printf("%s\n",s[2][2]);break;
		case 10:printf("%s\n",s[3][0]);break;
		case 11:printf("%s\n",s[3][1]);break;
		case 12:printf("%s\n",s[3][2]);break;
		dufault:printf("Please input right month\n");
	}
} 
