//������ƻ���ϰ�⼯��4���ӳ����ģ�黯�������4.3�ۺ���ϰ��1��
//��֤Pascal����Բ���ڽ�������3˫�Ա��ӳ��ߵĽ�����һ��ֱ����

#include<stdio.h>
#include<math.h>
#define PI 3.141592653589

struct coordinate{//����������������ֵ 
	double x;//x���� 
	double y;//y���� 
}; 

coordinate point(coordinate a,coordinate b,coordinate d,coordinate e);//һֱ�ĸ��㣬������ֱ�ߵĽ�������

/*
����˼·����Բ��Ϊԭ�㣬����ֱ������ϵ��
��Բ��ȡ�����㣬���������Σ����ò�������ȡ�㣬�ó������xOyƽ������
�ڷֱ���Աߵ�ֱ�߷��̣�����������㣬��֤������������ͬһ��ֱ���� 
*/ 

int main(){
	
	
	coordinate a,b,c,d,e,f,h1,h2,h3;//������������������� 
	double angle_a,angle_b,angle_c,angle_d,angle_e,angle_f;//�����������Բ�Ľǣ�������ƽ������
	double r=10.0;//����Բ�İ뾶
	double k1,k2,kk;//���彻���б���Լ�б�ʲ�
	double eps=1e-8;//���徫�� 
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
	
	h1=point(a,b,d,e);//��һ������
	h2=point(b,c,e,f);//�ڶ�������
	h3=point(c,d,f,a);//����������
	
	k1=(h3.y-h2.y)/(h3.x-h2.x);//����1�ͽ���2���ߵ�б�� 
	k2=(h2.y-h1.y)/(h2.x-h1.x);//����3�ͽ���3���ߵ�б�� 
	kk=k1-k2;//����б�ʵĲ�ֵ 
	
	//printf("kk=%lf\n",kk);//�鿴�Ƿ�����Ϊ����ԭ������֤ʧ�� 
	if(kk<eps){//�������б�ʲ�ֵ�ھ��ȷ�Χ�� 
		printf("Pascal������֤��ȷ\n");
		printf("k1-k2=%lf\n",kk);
	}
	else{
		printf("k1-k2=%lf\n",kk);//�����֤ʧ�ܣ������ʱ����ֱ�ߵ�б�ʲ�鿴�Ƿ�����Ϊ����ԭ������֤ʧ�� 
	} 
	
	/* 
	if((h3.y-h2.y)*(h2.x-h1.x) == (h3.x-h2.x)*(h2.y-h1.y)){//�����һ��ֱ����
		printf("Pascal������֤��ȷ\n"); 
	}
	else{
		printf("Pascal������֤ʧ��\n");
	}
	*/ 
	
	return 0; 
	
	 
	 
	 
}


coordinate point(coordinate a,coordinate b,coordinate d,coordinate e){
	//��֪�ĸ��㣬������ֱ�ߵĽ���
	coordinate pp;//���彻��
	double temp1,temp2;//������ʱ���� 
	double x1,x2,y1,y2;//���������ֵ
	x1=a.x-b.x;
	y1=a.y-b.y;
	x2=d.x-e.x;
	y2=d.y-e.y;
	if(x1*y1 == x2*y2){//��ֱ��ƽ�У�û�н���
		printf("These two lines don't intersect.\n"); 
	}
	temp1=(d.x*e.y-e.x*d.y)*x1-x2*(a.x*b.y-b.x*a.y);
	temp2=y1*x2-y2*x1;
	pp.x=temp1/temp2;
	pp.y=y1/x1*(pp.x-a.x)+a.y;
	return pp;

} 
