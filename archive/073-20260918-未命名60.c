#include<stdio.h>
int main(){
	long num;
	long sum=0L;
	_Bool input; 
	printf("输入数字");
	input=scanf("%ld",&num)==1;	
	while(input){
		sum+=num;
		printf("输入数字");
		input=scanf("%ld",&num)==1;
	}
printf("总和为%ld",sum);
return 0;	
	
}
