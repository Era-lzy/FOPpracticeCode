//������ƻ���ϰ�⼯��5��ʹ��������֯����5.2�����ϰ��73��
//��д���򣬴�ӡ��ͼ5.16��ʾ������ͼ��x^(2/3)+y^(2/3)=a^(2/3)


//ע��C�������������������������ɣ����� 
//ff=pow((pow(a,2/3)-pow(y,2/3)),3/2);
//f=pow((pow(a,2.0/3.0)-pow(y,2.0/3.0)),3.0/2.0);//�ǵü�.0,Ҫ��C������2/3=0��3/2=1�ˣ��� 
//Ϊʲô��pow(x,y)�У���x<0ʱ��y������С�����֣������������ 
#include<stdio.h>
#include<math.h>
double fp(double y,double a);

int main(){
	//���˼·���ȴ�ӡ�ϰ벿�֣��ٴ�ӡ�°벿�� 
	
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
		x1=-fp(y,a);//y������к���ͼ��ĺ�����ֵ
		x2=-x1;//y���Ҳ��к���ͼ��ĺ�����ֵ		
		//printf("y=%lf,x1=%lf,x2=%lf ",y,x1,x2);
		n1=(int)((x1-xmin)/dx);//�ڶ�����Ӧ���������ͼ��ĵط�
		n2=(int)((x2-xmin)/dx);//��һ����Ӧ���������ͼ��ĵط�
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


double fp(double y,double a){//һֱa��y��ֵ�����ʱx��ֵ 
	double ff;
	//ff=pow((pow(a,2/3)-pow(y,2/3)),3/2);
	ff=pow((pow(a,2.0/3.0)-pow(y,2.0/3.0)),3.0/2.0);//�ǵü�.0,Ҫ��C������2/3=0��3/2=1�ˣ���
	//Ϊʲô��pow(x,y)�У���x<0ʱ��y������С�����֣������������ 
	return ff;
} 
