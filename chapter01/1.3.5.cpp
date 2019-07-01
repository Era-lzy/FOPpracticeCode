#include<stdio.h>
#include<math.h>
#define Length 500 //地域长度 ,单位：m 
#define Width 300 //地域宽度，单位：m 
#define Area 12000 //需要保护的地块的面积，单位：m^2 
int main(){
	//在长500米，宽300米的地域内保护120000平方米的地块，求沿四周植树建绿化带的宽度
	float x;//定义绿化带宽度 
	float deta; //定义判别式 
	//float Length=5;
	deta=pow(Length+Width,2)/4+Area-Length*Width;//求二次方程的判别式大小
	//注意求幂时，需要用pow函数，不能用^符号，在C语言中这是按位异或运算符 
	printf("Length is %d\n",Length);
	if(deta<0) 
	{
	//return -1;//如果判别式小于零，返回错误}
	printf("Fault\n");
	};
	
	x = (Length+Width)/4+sqrt(deta) /2;//根据公式和实际问题求绿化带宽度 
	printf("The width is %f m.\n",x);//输出绿化带宽度，单位：米 
	return 0;
	 
}


