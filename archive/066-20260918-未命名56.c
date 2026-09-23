#include<stdio.h>
int main(){
	long num;
	long sum=0L;
	int status;//状态
	printf("输入数字");
	status=scanf("%ld",&num);
	
	while(status=1){
		sum+=num;
		printf("输入数字");
		status=scanf("%ld",&num); 
	}
printf("总和为%ld",sum);
return 0;	
	
}
