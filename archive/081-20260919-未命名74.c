#include<stdio.h>
int main(){
	int num;
	int count;
	int proxy;
	int n0=1;
	printf("输入一个非负整数：");
	scanf("%d",&num);
	proxy=num;
	for(count=0;proxy>=10;count++){
	proxy/=10;		
	}
	for(;count>0;count--,n0*=10);
	
	for(;n0>0;num=num-num/n0*n0,n0/=10){
		printf("%d ",num/n0);
	}
	return 0;
} 
