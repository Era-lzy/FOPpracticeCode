//程序设计基础习题集第3章循环程序设计3.2提高练习第28题
//用循环语句控制分别打印如图3.12、图3.13和图3.14所示形式

//注意当有较多项是一样的时候，可以把其他特殊情况讨论完，然后直接else讨论剩下的情况 

#include<stdio.h>
 

void print312(void);//打印如图3.12所示形式 
void print313(void);//打印如图3.13所示形式 
void print314(void);//打印如图3.14所示形式 

int main(){
	printf("\n");
	
	print312();//打印如图3.12所示形式
	printf("\n");
	
	print313();//打印如图3.13所示形式
	printf("\n");
	
	print314();//打印如图3.14所示形式
	return 0;
		
	} 
	
	void print312(){
		
		int i,j;//定义循环的行和列
		int star1,star2;//定义循环的起始条件 
		int end1,end2;//定义循环的终止条件 
		//首先打印图3.12所示形式
		star1=(int)'A';//左边的起始
		star2=(int)'N';//右边的起始 
		end1=(int)('M');//列的循环 
		end2=(int)('Z');//行的循环,注意中间多了个*号 
		for(i=star1;i<=end1;++i){//列的循环 
		    for(j=star1;j<=end1;++j){
			    if(j<i){
				printf(" ");
			}
			else{
				printf("%c",j);
			}
		}
		printf("*");//别忘了中间的*号 
		//左边的循环结束，下面开始右边的循环
		for(j=star2;j<=end2;++j){
			if(j<=end2-i+star1){
				printf("%c",j);
			}
			else{
				printf(" ");
			}
		}
		//右边循环结束，下面换行
		printf("\n"); 
		}
		
		//含字母的循环结束,下面开始最后一行的循环 
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
		
		
		int i,j;//循环的中间变量
		
		int temp;//临时变量 
		for(i=1;i<=11;++i){
			for(j=1;j<=29;++j){
				if(i<=6){//上半部分 
					if(j<=9){
						temp=i+j-2+'A';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
						}
						printf("%c",temp); 
					}
					else if(10<=j && j<=20 ){
						
						/* 
						if(i<=5){
							
							for(k=1;k<=6-i;++k){
								printf(" ");//两个空格 
							}
							
							for(k=1;k<=2*i-1;++k){
								temp=i-1+'A';
								if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
								}
								printf("%c",temp);
							}
						 
							for(k=1;k<=6-i;++k){
								printf(" ");//两个空格 
							}
						}
						if(i==6){
							for(k=1;k<=2*i-1;++k){
								temp=i-1+'A';
								if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
								}
								printf("%c",temp);
							}
						}*/ //注意这样会重复打印多次字母，一个j打印一次！
						if(i<=5){
							if(j<=15-i){
								printf(" ");
							}
							else if(16-i<=j && j<=14+i){
								temp=i-1+'A';
								if(temp>'I'){
									temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
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
								temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
							}
							printf("%c",temp);
						}
					
						
					}
					else{
						temp=i+j-21+'A';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
						}
						printf("%c",temp);
					}
				
				}
				else if(i>6){
					if(j<=9){
						temp=-i+j+5+'F';
						if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
						}
						printf("%c",temp);
					}
					else if(10<=j && j<=20){
						/*
						for(k=1;k<=i-6;++k){
							printf(" ");//两个空格 
						}
						for(k=1;k<=23-2*i;++k){
							temp=-i+'F'+6;
							if(temp>'I'){
							temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
							}
							printf("%c",temp);
						}*/ //注意这样会重复多次打印中间的字母，一个j打印一次！
						
						if(j<=i+3){
							printf(" ");
						}
						else if(i+4<=j && j<=26-i){
							temp=-i+'F'+6;
							if(temp>'I'){
								temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
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
							temp=(temp-'A')%('I'-'A')-1+'A';//重新轮换 
						}
						printf("%c",temp);
					} 
				}
					 
			}//内层循环结束
			printf("\n");//换行输出字符 
		}//外层循环 
	} 
	
	void print314(){
		int i,j;//定义循环变量 
		int temp;//定义临时中间变量
		for(i=1;i<=7;++i){//外层循环 
			for(j=1;j<=14;++j){//内层循环 
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
				}//第一行打印完毕
				
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
				}//第2、3行打印完毕
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
				}//第4行打印完毕
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
					  
				}//第5、6行打印完毕
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
					}//第7行打印完毕 
			}//内层循环
		
		printf("\n");//一行打印完毕，换行 
		}//外层循环 
		
	} 
		 
	
	
	
	 

