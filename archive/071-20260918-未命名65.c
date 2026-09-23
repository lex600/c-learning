#include<stdio.h>
int main(){
	int x;
	int y=55;
	for(x=1;y<=75;y=(++x*5)+50)
	printf("%d %10d\n",x,y); 
}
