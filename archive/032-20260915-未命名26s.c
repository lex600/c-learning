#include<stdio.h>
int main(){
	int x=0;
	scanf("%d",&x);
	if(x<0)printf("f(x)=-1");
	if(x==0)printf("f(x)=0");
	if(x>0)printf("f(x)=%d",x*2);
}
