#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	if(N<0){
	printf("fu ");
	N=-N;
    }
	int n;
	int N1=N;
	int cnt=0;
	int n0=1;
	for(;N1/10>0;N1/=10){
		n0*=10;
	}
	
	for(;n0>0;n0/=10){
		n=N/n0;
		if(n==0)printf("ling");
		if(n==1)printf("yi");
		if(n==2)printf("er");
		if(n==3)printf("san");
		if(n==4)printf("si");
		if(n==5)printf("wu");
		if(n==6)printf("liu");
		if(n==7)printf("qi");
		if(n==8)printf("ba");
		if(n==9)printf("jiu");
		if(n0>9)printf(" ");
		N%=n0;
	}
}
