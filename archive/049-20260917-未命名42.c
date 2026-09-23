#include<stdio.h>
int main(){
	int x;
	int digit;
	int ret;
	scanf("%d",&x) ;
	while(x>0){
		digit=x%10;
		ret=ret*10+digit;
		printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		x/=10;
	}
	printf("%d",ret) ;
} 
