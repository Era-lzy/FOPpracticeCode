//������ƻ���ϰ�⼯��2�·�֧�������2.1������ϰ��17��
//��д����Ϊĳ���ٹ�·�շ�վ������ֳ������շѶ�
//С����(car):0.50Ԫ/����
//������trunk��:1.00Ԫ/����
//��ͳ���bus��:1.50Ԫ/����

#include<stdio.h> 
#include<string.h>
#define PERCAR     0.50    //����С����car��λ�շѶ0.50Ԫ/����,ע��û��;�ֺ� 
#define PERTRUNK   1.00  //����trunk�����շѶ1.00Ԫ/����
#define PERBUS     1.50     //��ͳ�bus�����շѶ1.50Ԫ/���� 
 
 double charge(double km,char VehicleType[]);//�����շѺ���
 //����������������VehicleType, ������ʻ·��km 
 //����������� 
 
 int main(){
 	
	 double km;//������ʻ·�̣���λkm
	 double fare; //�������
	 char VehicleType[6] ;//���峵������ 
	 
	 printf("Please input the type of the vehicle.\n");
	 printf("You can input car/trunk/bus\n");
	 scanf("%s",VehicleType);//���복������
	 
	 printf("Please input the km of the vehilce.\n"); 
	 scanf("%lf",&km);//����̸�ֵ 
	 
	 //gets(VehicleType); //��֪��Ϊʲôgets()��������ʹ 
	 
	 fare=charge(km,VehicleType);//Ӧ����ȡ�ķ���
	 printf("The fare of the vehicle is %.2lf RMB.",fare);//�����ȡ����
	 return 0; 
	  
 }
 double charge(double km,char VehicleType[]){
 	//��ʹ���ַ����ȽϺ���strcmp()�жϳ������ͣ�Ȼ���ټ������
 	//ע�����ַ�����ͬ��strcmp()�������ص�ֵ��0 
	 double fare;//���巵����fare,��ʾӦ����ȡ�ķ��� 
	 if(!strcmp(VehicleType,"car")) {
	 	//�����������ʱ����car��ע�����!�߼��������
	 	fare=km*PERCAR;//����С����car�շѶԪ
				  
	 }
	 else if(!strcmp(VehicleType,"trunk")){
	 	fare=km*PERTRUNK;
	 } 
	 else if(!strcmp(VehicleType,"bus")){
	 	fare=km*PERBUS;
	 }
	 else{
	 	printf("Please input right type of the vehicle.\n");
	 	printf("You could input car/trunk/bus\n");
	 }
	 return fare;
	 
	 
 	
 }
 
