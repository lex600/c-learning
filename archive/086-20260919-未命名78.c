#include<stdio.h>
int main(){
	int a,b;
	int n;
	scanf("%d %d",&a,&b);
	if(a<=b)n=a;
	else n=b;
	for(;a%n!=0||b%n!=0;n--);
	printf("%d",n);
} 
