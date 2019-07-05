//程序设计基础习题集第4章子程序和模块化程序设计4.3综合练习第1题
//验证Pascal定理，圆的内接六边形3双对边延长线的交点在一条直线上

#include<stdio.h>
#include<math.h>
#define PI 3.141592653589

struct coordinate{//用来返回两个坐标值 
	double x;//x坐标 
	double y;//y坐标 
}; 

coordinate point(coordinate a,coordinate b,coordinate d,coordinate e);//一直四个点，求两个直线的交点坐标

/*
基本思路，以圆心为原点，建立直角坐标系，
在圆上取六个点，连成六边形，采用参数坐标取点，得出顶点的xOy平面坐标
在分别求对边的直线方程，其出三个交点，验证这三个交点在同一条直线上 
*/ 

int main(){
	
	
	coordinate a,b,c,d,e,f,h1,h2,h3;//定义六个点和三个交点 
	double angle_a,angle_b,angle_c,angle_d,angle_e,angle_f;//定义六个点的圆心角，便于求平面坐标
	double r=10.0;//定义圆的半径
	double k1,k2,kk;//定义交点的斜率以及斜率差
	double eps=1e-8;//定义精度 
	angle_a=0.21*PI;
	angle_b=0.34*PI;
	angle_c=0.53*PI;
	angle_d=1.13*PI;
	angle_e=1.46*PI;
	angle_f=1.73*PI;
	
	a.x=r*cos(angle_a);
	b.x=r*cos(angle_b);
	c.x=r*cos(angle_c);
	d.x=r*cos(angle_d);
	e.x=r*cos(angle_e);
	f.x=r*cos(angle_f);
	
	
	a.y=r*sin(angle_a);
	b.y=r*sin(angle_b); 
	c.y=r*sin(angle_c); 
	d.y=r*sin(angle_d); 
	e.y=r*sin(angle_e); 
	f.y=r*sin(angle_f);
	
	h1=point(a,b,d,e);//第一个交点
	h2=point(b,c,e,f);//第二个交点
	h3=point(c,d,f,a);//第三个交点
	
	k1=(h3.y-h2.y)/(h3.x-h2.x);//交点1和交点2连线的斜率 
	k2=(h2.y-h1.y)/(h2.x-h1.x);//交点3和交点3连线的斜率 
	kk=k1-k2;//两者斜率的差值 
	
	//printf("kk=%lf\n",kk);//查看是否是因为精度原因导致验证失败 
	if(kk<eps){//如果两者斜率差值在精度范围内 
		printf("Pascal定理验证正确\n");
		printf("k1-k2=%lf\n",kk);
	}
	else{
		printf("k1-k2=%lf\n",kk);//如果验证失败，输出此时两条直线的斜率差，查看是否是因为精度原因导致验证失败 
	} 
	
	/* 
	if((h3.y-h2.y)*(h2.x-h1.x) == (h3.x-h2.x)*(h2.y-h1.y)){//如果在一条直线上
		printf("Pascal定理验证正确\n"); 
	}
	else{
		printf("Pascal定理验证失败\n");
	}
	*/ 
	
	return 0; 
	
	 
	 
	 
}


coordinate point(coordinate a,coordinate b,coordinate d,coordinate e){
	//已知四个点，求两条直线的交点
	coordinate pp;//定义交点
	double temp1,temp2;//定义临时变量 
	double x1,x2,y1,y2;//定义坐标差值
	x1=a.x-b.x;
	y1=a.y-b.y;
	x2=d.x-e.x;
	y2=d.y-e.y;
	if(x1*y1 == x2*y2){//两直线平行，没有交点
		printf("These two lines don't intersect.\n"); 
	}
	temp1=(d.x*e.y-e.x*d.y)*x1-x2*(a.x*b.y-b.x*a.y);
	temp2=y1*x2-y2*x1;
	pp.x=temp1/temp2;
	pp.y=y1/x1*(pp.x-a.x)+a.y;
	return pp;

} 
