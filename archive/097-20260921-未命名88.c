#include<stdio.h>
int main(){
	double copy=2;
	double up,down;
	int N;
	scanf("%d",&N);
	int count=1;
	double sum;
	sum=0;
	up=2;
	down=1;
	for (;count<=N;count++){
		sum+=up/down;
		copy=up;
		up+=down;
		down=copy;b
	}
	printf("%.2f",sum);
} 
