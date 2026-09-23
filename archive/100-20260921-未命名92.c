#include<stdio.h>
int main(){
	int a;
	int n;
	scanf("%d %d",&a,&n);
	int S;
	int n0=1;
	int n_=n;
	int sum=0;
	int n0_=n0;
	for(;n_>1;n_--){
		n0*=10;
	}
	for(;n>0;n--){
		S=0;
		n0_=n0;
		for(;n0_>0;n0_/=10){
		S+=a*n0_;
	    }
	    sum+=S;
	    n0/=10;
	}
	
	
	printf("%d",sum);
} 
