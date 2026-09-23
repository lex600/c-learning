#include<stdio.h>
int main(){
	const int PASS =60;
	int score;
	printf("请输入成绩：");
	scanf("%d",&score);
	printf("你输入的成绩是%d分\n",score);
	if(score<PASS)
	printf("没及格。");
	else printf("及格。");
	printf("再见。\n"); 
}
