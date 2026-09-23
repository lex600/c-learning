#include<stdio.h>
int main(){
	int a,b;
	int n;
	scanf("%d %d",&a,&b);
	if(a<=b)n=a;
	else n=b;
	for(;1;n--){
		if(a%n==0){
			if(b%n==0)break;
		}
	}
	printf("%d",n);
} 
