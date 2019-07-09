//程序设计基础习题集第6章使用指针6.1基本练习第7题
//用指针形式访问数组元素，编写程序，求m*n个元素的给定float型数组中的各个元素之乘积
 
 
 #include<stdio.h>
 
 int main(){
 	int m=3;
 	int n=4;
 	int i,j;
 	float a[m][n];
	float *p;
	p=&(a[0][0]);//用指针p指向数组a,也可以写成p=a[0]或者p=*a,此处需要注意一维数组与多维数组的区别 
 	float product=1;//数组a中各个元素的乘积
	for(i=0;i<m;++i){//给数组a中各个元素赋初值 
		for(j=0;j<n;++j){
			*(p+n*i+j)=(i+j+1)*1.0;	
		}
	}
	printf("The values of each element in array a is\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%4.1f",a[i][j]);//注意时%f,不是%d 
		}
		printf("\n");
	}
	printf("\n");
	//p=&(a[0][0]);//重新让p指向数组a的首地址，不过这用不上，p一直指向a[0][0] 
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			product=product*(*(p+n*i+j));
		}
	}
	printf("The result is %.1f\n",product);
	return 0; 
	 
 }
