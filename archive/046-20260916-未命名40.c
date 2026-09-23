#include<stdio.h>
int main(){
	int num,count=0;
	int sum=0;
	printf("输入一系列正整数：\n");
	do{
		scanf("%d",&num);
		if(num!=-1){
		
		count++;
		sum+=num;
	}
	}while(num!=-1);
	printf("%f",1.0*sum/count);
	
} 
