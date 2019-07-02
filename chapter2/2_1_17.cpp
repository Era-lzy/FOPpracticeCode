//程序设计基础习题集第2章分支程序设计2.1基本练习第17题
//编写程序，为某高速公路收费站计算各种车辆的收费额
//小汽车(car):0.50元/公里
//卡车（trunk）:1.00元/公里
//大客车（bus）:1.50元/公里

#include<stdio.h> 
#include<string.h>
#define PERCAR     0.50    //定义小汽车car单位收费额，0.50元/公里,注意没有;分号 
#define PERTRUNK   1.00  //卡车trunk单价收费额，1.00元/公里
#define PERBUS     1.50     //大客车bus单价收费额，1.50元/公里 
 
 double charge(double km,char VehicleType[]);//声明收费函数
 //输入量：车辆类型VehicleType, 车辆行驶路程km 
 //输出量：费用 
 
 int main(){
 	
	 double km;//定义行驶路程，单位km
	 double fare; //定义费用
	 char VehicleType[6] ;//定义车辆类型 
	 
	 printf("Please input the type of the vehicle.\n");
	 printf("You can input car/trunk/bus\n");
	 scanf("%s",VehicleType);//输入车辆类型
	 
	 printf("Please input the km of the vehilce.\n"); 
	 scanf("%lf",&km);//给里程赋值 
	 
	 //gets(VehicleType); //不知道为什么gets()函数不好使 
	 
	 fare=charge(km,VehicleType);//应该收取的费用
	 printf("The fare of the vehicle is %.2lf RMB.",fare);//输出收取费用
	 return 0; 
	  
 }
 double charge(double km,char VehicleType[]){
 	//先使用字符串比较函数strcmp()判断车辆类型，然后再计算费用
 	//注意若字符串相同，strcmp()函数返回的值是0 
	 double fare;//定义返回量fare,表示应该收取的费用 
	 if(!strcmp(VehicleType,"car")) {
	 	//如果车辆类型时汽车car，注意加了!逻辑非运算符
	 	fare=km*PERCAR;//计算小汽车car收费额，元
				  
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
 
