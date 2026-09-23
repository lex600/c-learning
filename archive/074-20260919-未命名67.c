#include<stdio.h>
int main(){
	int t;
	int power;
	double time;
	int limit;
	printf(" ‰»Îº∏œÓ£∫");
	scanf("%d",&limit);
	for(time=0,power=1,t=1;t<=limit;t++,power*=2){
		time+=1.0/power;
		printf("%f,%d\n",time,t);
	}
}
