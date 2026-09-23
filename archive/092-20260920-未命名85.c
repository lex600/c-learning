#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int n=N;
	int num1=1;
	int num2=1;
	int j=1;
	for(;num2<=n;num2++){
		num1=1;
		for(;num1<=num2;num1++){
			if(num1<num2){
				if(num1*num2<10)printf("%d*%d=%d   ",num1,num2,num1*num2);
				else{
					printf("%d*%d=%d  ",num1,num2,num1*num2);
				}
			}else{
				printf("%d*%d=%d\n",num1,num2,num1*num2);
			}
			
		}
	}
}
