#include<stdio.h>
int main(){
	int x;
	int n=1;
	int count=1;
	scanf("%d",&x);
	for(;n<x;n++){
		if(x%n==0){
		n=x;printf("不是素数\n被%d整除\n",count+1);}
		else count++;
	}
	if(count==x)printf("是素数\n被%d整除\n",count);
	
}
