#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int n0;
	int n1;
	int n,n_;
	int sum;
	scanf("%d",&N);
	n0=pow(10,N-1);
	n=pow(10,N-1);
	n1=pow(10,N);
	for(;n<n1;n++){
		sum=0;
		n_=n;
		n0=pow(10,N-1);
		for(;n0>0;n0/=10){
			sum+=pow(n_/n0,N);
			n_%=n0;
			}
			if(sum==n){
				printf("%d\n",n);
		}
		
	}
} 
