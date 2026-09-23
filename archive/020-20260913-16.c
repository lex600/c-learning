#include<stdio.h>
int main(){
	int a=0;
	printf("在一行中给出一个正整数，单位是厘米：");
	scanf("%d",&a);
	double b=a/100.0/0.3048;
	int total_inch=(b*12+0.5);
	int foot=total_inch/12;
	int inch=total_inch%12;
	printf("%d %d",foot,inch);
}
	
