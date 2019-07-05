//������ƻ���ϰ�⼯��4���ӳ����ģ�黯�������4.1������ϰ��20��
//������ͬ�෨��һ������������ĺ������÷����������¹�ʽ��
//����һ����������еĵ�k��r(k):
//r(k)=(multiplier*r(k-1)+increment) MOD modulus
//���У�r(k-1)����������еĵ�k-1�multiplier��increment��modulus�ǳ���

#include<stdio.h>
#include<math.h>

int main(){
	int n=30;//������Ҫ���ɵ����е�Ԫ�ظ��� 
	int i;//����ѭ������ 
	int r[n];//����洢��������е�����
	int multiplier=25173;
	int increment=13849;
	int modulus=65536;
	r[0]=0;
	for(i=1;i<n;++i){
		r[i]=(multiplier*r[i-1]+increment)%modulus;
	}
	for(i=0;i<n;++i){
		printf("%2d\n",r[i]);//������ɵ���������� 
	}
	return 0; 
} 
