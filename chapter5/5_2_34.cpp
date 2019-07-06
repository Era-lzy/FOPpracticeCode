//程序设计基础习题集第5章使用数组组织数据5.2提高练习第34题
//编一个函数，使用Gaoss（高斯）消去法解线性方程组；A*X=b


/*******************

这个题值得再做几遍，很容易出错 

*******************/



#include<stdio.h>


int main(){
	int n=4;
	float a[n][n+1]={{1.0,1.0,1.0,1.0,4.0},{2.0,3.0,5.0,4.0,14.0},{5.0,1.0,4.0,2.0,12.0},{3.0,4.0,6.0,3.0,16.0}};//给增广矩阵赋初值
	float b[n][n+1]={0};
	float x[n];//解向量 
	int i,j,k;//循环变量
	float temp;//临时变量 
	//打印原始的增广矩阵
	
	printf("The initial A is\n");
	for(i=0;i<n;++i){
		for(j=0;j<n+1;++j){
			printf("%5.1f",a[i][j]);
		}
		printf("\n");
	}
	
	
	int nn=0;
	for(i=0;i<n-1;++i){//从第二行开始加减 
		for(k=i+1;k<n;++k){
			temp=a[k][i];
			for(j=i;j<n+1;++j){
				//a[k][j]=a[k][j]-a[k][i]/a[i][i]*a[i][j];//注意经过一次计算后,a[k][i]的值为0了，所以后面的元素值不变 
				//printf("k=%d,j=%d,a[%d][%d]=%f\n",k,j,k,j,a[k][j]);
				//++nn;//统计一共发生的次数
				//temp=a[k][i];
				
				//printf("temp=%f\n",temp);
				a[k][j]=a[k][j]-temp/a[i][i]*a[i][j];
				//printf("k=%d,j=%d,a[%d][%d]=%f\n",k,j,k,j,a[k][j]);
				
				//注意，目前程序只能解决正常的从上往下的矩阵，
				//如果在加减消元过程中，有一行的元素个数直接有两个或以上的元素变为0，程序会出错，目前还没有解决
				/*如 
				{{1,1,1,1,4},{0,1,3,2,6},{0,0,0,-2,-2},{0,0,0,-2,-2}}
				需要设计换行操作，目前还没有解决 
				*/ 
			}
		}
	}
	
	
	
	//A[1][4]=A[1][4]-A[1][0]/A[0][0]*A[0][4];
	/*
	printf("A[1][4]=%.1f\n",A[1][4]);
	A[1][4]=A[1][4]-A[1][0]/A[0][0]*A[0][4];
	printf("A[1][4]=%.1f\n",A[1][4]);
	*/
	
	//fflush(stdout); 
	//rewind(stdin);//刷新缓存
	
	//printf("nn=%d\n",nn); 
	//打印加减消元后的增广矩阵
	printf("The latter a is\n");
	for(i=0;i<n;++i){
		for(j=0;j<n+1;++j){
			printf("%5.1f",a[i][j]);
		}
		printf("\n");
	}
	//此时增广矩阵已经转化为行阶梯型矩阵 
	
	//下面开始求根向量
	//将增广矩阵转化为行最简型矩阵，便于直接得出方程的解
	for(j=n-1;j>=1;--j){//列下标 
		for(i=j-1;i>=0;--i){//行下标
			temp=a[i][j]; 
			for(k=j;k<=n;++k){//列下标 
				a[i][k]=a[i][k]-temp/a[j][j]*a[j][k];
				printf("a[%d][%d]=%5.1f  ",i,k,a[i][k]); 
			}printf("\n");
		}
		
	}
	//输出化为行最简型的增广矩阵
	
	printf("The latest a[][] is\n"); 
	for(i=0;i<n;++i){
		for(j=0;j<n+1;++j){
			printf("%5.1f",a[i][j]);
		}
		printf("\n");
	}
	
	
	//下面求方程的解
	for(i=n-1;i>=0;--i){
		x[i]=a[i][n]/a[i][i];
	}
	printf("The result is \n");
	printf("x1=%3.1f,x2=%3.1f,x3=%3.1f,x4=%3.1f\n",x[0],x[1],x[2],x[3]); 
	
	 
	return 0; 
	
} 
