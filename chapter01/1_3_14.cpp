//��1��˳��������1.3�ۺ���ϰ14С��
#include<stdio.h>
#include<math.h>

#define yield_per 950  //���嵥λ������Ķ��950����
#define xa 547
#define ya 411
#define xb 804
#define yb 77
#define xc 39
#define yc 208
#define xd 116 
#define yd 332
//�����������
int main(){
    //�������׵�������������׵ز���,�ǵ�Ķ��ƽ���׵�
    double area;//���׵��������Ķ
    double area1;//������ABD�����ƽ����
    double area2;//������BCD�����ƽ����
    double Lab;//��AB�ĳ���
    double Lad;//��AD����
    double Lbd;//��BD����
    double Lbc;//��BC����
    double Lcd;//��CD����
    double p1;//p1=Lab+Lad+Lbd
    double p2;//p2=Lbc+Lbd+Lcd
    double yield;//���׵ز���
    Lab=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    Lad=sqrt(pow(xa-xd,2)+pow(ya-yd,2));
    Lbd=sqrt(pow(xb-xd,2)+pow(yb-yd,2));
    Lbc=sqrt(pow(xb-xc,2)+pow(yb-yc,2));
    Lcd=sqrt(pow(xc-xd,2)+pow(yc-yd,2));
    p1=Lab+Lad+Lbd;
    p2=Lbc+Lbd+Lcd;
    area1=sqrt(p1*(p1-Lab)*(p1-Lad)*(p1-Lbd));
    area2=sqrt(p2*(p2-Lbc)*(p2-Lbd)*(p2-Lcd));
    area=(area1+area2)/666.67;//�����׵���������Ķ��1ĶԼ����666.67ƽ����
    yield=area*yield_per;//���׵ز�������λ������
    printf("The area of the corn is %f mu\n",area); 
    printf("The corn yield is %f kg\n",yield);//������׵ز���
    return 0;
    

}
