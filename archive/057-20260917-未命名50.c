#include<stdio.h>
int main(){
	int x=2;
	int i;
	int cnt=0;
	int num=0;
	while(cnt<50){
	
		
		int isprime=1;
			for (i=2;i<=x/i;i++){
				if(x%i==0){
				isprime=0;
				break;}
				
			
		}

	if(isprime==1){printf("%d\n",x);
	cnt++;}
	x++; 
}
	
}
