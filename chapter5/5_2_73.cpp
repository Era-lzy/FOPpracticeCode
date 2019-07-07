//程序设计基础习题集第5章使用数组组织数据5.2提高练习第73题
//编写程序，打印如图5.16所示的星型图形x^(2/3)+y^(2/3)=a^(2/3)


//注意C语言中两个整数相除的运算规律！！！ 
//ff=pow((pow(a,2/3)-pow(y,2/3)),3/2);
//f=pow((pow(a,2.0/3.0)-pow(y,2.0/3.0)),3.0/2.0);//记得加.0,要不C语言中2/3=0，3/2=1了！！ 
//为什么在pow(x,y)中，当x<0时，y不能有小数部分，否则计算会出错？ 
#include<stdio.h>
#include<math.h>
double fp(double y,double a);

int main(){
	//大概思路，先打印上半部分，再打印下半部分 
	
	int i,j,n,n1,n2;
	double x1,x2,y,dx,dy,a,xmin,xmax,ymin,ymax;
	a=1.0;
	n=40;
	xmin=-a;
	xmax=a;
	ymin=-a;
	ymax=a;
	
	dx=a/n;
	dy=a/n;
	//printf("dx=%3.3f,dy=%3.3f\n",dx,dy);
	
	//ymax=a;
	for(j=2*n;j>=1;--j){		
		y=ymin+j*dy;
		if(y<0){
			y=-y;
		}
		x1=-fp(y,a);//y轴左侧有函数图像的横坐标值
		x2=-x1;//y轴右侧有函数图像的横坐标值		
		//printf("y=%lf,x1=%lf,x2=%lf ",y,x1,x2);
		n1=(int)((x1-xmin)/dx);//第二象限应该输出函数图像的地方
		n2=(int)((x2-xmin)/dx);//第一象限应该输出函数图像的地方
		//printf("n1=%d,n2=%d\n",n1,n2);
		for(i=1;i<=n2;++i){
			if(i==n1 || i==n2){
				printf("*");
			}
			else{
				printf(" ");
			}
				
		}
		printf("\n"); 
	}
	
	
	return 0; 
	 
}


double fp(double y,double a){//一直a和y的值，求此时x的值 
	double ff;
	//ff=pow((pow(a,2/3)-pow(y,2/3)),3/2);
	ff=pow((pow(a,2.0/3.0)-pow(y,2.0/3.0)),3.0/2.0);//记得加.0,要不C语言中2/3=0，3/2=1了！！
	//为什么在pow(x,y)中，当x<0时，y不能有小数部分，否则计算会出错？ 
	return ff;
} 
