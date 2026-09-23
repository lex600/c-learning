#include<stdio.h>
int main(){
	int x,a,b,c,y;
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x%100-b*10;
	
	printf("%d",y=c*100+b*10+a);
}
