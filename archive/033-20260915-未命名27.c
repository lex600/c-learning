#include<stdio.h>
int main(){
	int x,f;
	scanf("%d",&x);
	if(x<0)f=-1;
	else if(x>0)f=x*2;
	else f=0;
	printf("%d",f);
}
