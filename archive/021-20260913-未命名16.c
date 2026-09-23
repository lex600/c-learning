#include<stdio.h>
int main(){
	int time,hour,minute,last,total;
	scanf("%d %d",&time,&last);
	hour=time/100,minute=time%100;
	total=hour*60+minute+last/100*60+last%100;
	printf("%d",total/60*100+total%60);
	
}
