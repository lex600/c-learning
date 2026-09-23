#include<stdio.h>
int main(){
	int num;
	int n0=1;
	printf("输入一个非负整数：");
	scanf("%d",&num);
	while(num/n0>=10)
	n0*=10;
	while(n0>0){
		printf("%d ",num/n0%10);
		n0/=10;
	} 
} 
