//������ƻ���ϰ�⼯��6��ʹ��ָ��6.1������ϰ��7��
//��ָ����ʽ��������Ԫ�أ���д������m*n��Ԫ�صĸ���float�������еĸ���Ԫ��֮�˻�
 
 
 #include<stdio.h>
 
 int main(){
 	int m=3;
 	int n=4;
 	int i,j;
 	float a[m][n];
	float *p;
	p=&(a[0][0]);//��ָ��pָ������a,Ҳ����д��p=a[0]����p=*a,�˴���Ҫע��һά�������ά��������� 
 	float product=1;//����a�и���Ԫ�صĳ˻�
	for(i=0;i<m;++i){//������a�и���Ԫ�ظ���ֵ 
		for(j=0;j<n;++j){
			*(p+n*i+j)=(i+j+1)*1.0;	
		}
	}
	printf("The values of each element in array a is\n");
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%4.1f",a[i][j]);//ע��ʱ%f,����%d 
		}
		printf("\n");
	}
	printf("\n");
	//p=&(a[0][0]);//������pָ������a���׵�ַ���������ò��ϣ�pһֱָ��a[0][0] 
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			product=product*(*(p+n*i+j));
		}
	}
	printf("The result is %.1f\n",product);
	return 0; 
	 
 }
