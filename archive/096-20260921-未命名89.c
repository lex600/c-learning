#include<stdio.h>
int main(){
	int up,down; 
	scanf("%d/%d",&up,&down);
	int count;
	int copy;
	int up1=up;
	int down1=down;
	while(up1%down1!=0){
		copy=down1;
		down1=up1%down1;
		up1=copy;
		
	}
	printf("%d/%d",up/down1,down/down1);
	
}
