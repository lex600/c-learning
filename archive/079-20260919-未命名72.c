#include<stdio.h>
int main(){
	int count=1;
	int n;
	double sum=0;
	printf("输入n项"); 
	scanf("%d",&n); 
	while(count<=n){
		sum=sum+1.0/count;
		count++;
		
	}
	printf("和为%f",sum);
} 
