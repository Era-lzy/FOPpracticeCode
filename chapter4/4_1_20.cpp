//程序设计基础习题集第4章子程序和模块化程序设计4.1基本练习第20题
//用线性同余法编一个产生随机数的函数。该方法基于如下公式，
//计算一个随机数序列的第k项r(k):
//r(k)=(multiplier*r(k-1)+increment) MOD modulus
//其中，r(k-1)是随机数序列的第k-1项；multiplier、increment、modulus是常数

#include<stdio.h>
#include<math.h>

int main(){
	int n=30;//定义需要生成的序列的元素个数 
	int i;//定义循环变量 
	int r[n];//定义存储随机数序列的数组
	int multiplier=25173;
	int increment=13849;
	int modulus=65536;
	r[0]=0;
	for(i=1;i<n;++i){
		r[i]=(multiplier*r[i-1]+increment)%modulus;
	}
	for(i=0;i<n;++i){
		printf("%2d\n",r[i]);//输出生成的随机数序列 
	}
	return 0; 
} 
