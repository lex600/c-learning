#include<stdio.h>
int main(){
	int num;
	int N;
	int input;
	int count=0;
	printf("输入要猜的数和次数"); 
	scanf("%d %d",&num,&N);
	do{
		if(count>=N){
			printf("game over");
			goto out;
		}
		printf("输入猜数\n");
		scanf("%d",&input);
		
		if(input<0){
			printf("game over");
			break;
		}
		if(input>num){
			printf("大了\n"); 
		}
		if(input<num){
			printf("小了\n");
		}
		
		
		
		count++;
	}while(input!=num);
	if(count==1&&input>0){
		printf("bingo");
	}
	if(count>1&&count<=3&&input>0){
		printf("lucky you");
	}
	if(count>3&&count<=N&&input>0){
		printf("good guess");
	}
	out:
		return 0;
} 
