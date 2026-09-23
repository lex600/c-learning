#include<stdio.h>
int main(){
	printf("请输入文本");
	int hour1,minute1,hour2,minute2;
	scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
	int minute_=minute1-minute2,hour_=hour1-hour2;
	if(minute1-minute2<0&&hour1-hour2>0)minute_=60+minute1-minute2,hour_=hour1-hour2-1;
	if(minute1-minute2>=0&&hour1-hour2<0)minute_=60-minute1+minute2,hour_=hour2-hour1-1;
	if(minute1-minute2<0&&hour1-hour2<=0)minute_=minute2-minute1,hour_=hour2-hour1;
	if(minute_%60==0)hour_=hour_+minute_/60,minute_=0; 
	printf("时间差是%d时，%d分",hour_,minute_);
}
