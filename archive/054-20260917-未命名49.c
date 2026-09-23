#include<stdio.h>
int main(){
	int x;
	int i;
	
	int num=0;
	for(x=2;x<100;x++){
	int isprime=1;
		for (i=2;i<x;i++){
			if(x%i==0){
			isprime=0;
			break;}
			
		
	}
	if(isprime==1)num+=x;
	}
	printf("%d",num);
}
