#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int count=N;
	int count1=N;
	int num=1;
	int sum=1;
	int sum1=1;
	int sum2=1;
	int x=pow(10,N) ;
	for(;count>0;count--){
		for(;num<10;num++){
			sum1*=num;
			sum2=num*x;
			if(count==0){
				if(sum1==sum2){
					printf("%d",sum);
				}
				
			}
		}
		sum+=sum1;
		sum1=1;
	}
} 
