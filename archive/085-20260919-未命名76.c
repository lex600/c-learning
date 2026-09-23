#include<stdio.h>
int main(){
	int x;
	printf("ÊäÈëÕýÐò"); 
	scanf("%d",&x);
	do{
		printf("%d ",x%10);
		x/=10;
	}while(x>0);
	
}
