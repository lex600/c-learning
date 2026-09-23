#include<stdio.h>
int main(){
	int a=0;
	printf("在一行中给出一个正整数，单位是厘米：");
	scanf("%d",&a);
	double b=a/100.0/0.3048;
	
int foot=b;
int inch=(b-foot)*12;
printf("%d %d",foot,inch);
}
