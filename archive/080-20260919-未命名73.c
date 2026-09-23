#include<stdio.h>
int main(){
	int count=1;
	int n;
	double sum=0;
	printf("输入n项"); 
	scanf("%d",&n); 
	for(;count<=n;count++){
		if(count%2==1)sum=sum+1.0/count;
		else sum=sum-1.0/count;
	}
	printf("和为%f",sum);
}
