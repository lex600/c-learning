#include<stdio.h>
int main(){
	int N;
	int n0,count,num,count1,count2,count3;
	int sum=1;
	count=0;
	scanf("%d",N);
	num=N;
	for(;num>0;count++){
		num/=10;
	}
	for(;count>0;count--){
		n0*=10;
	}
	count1=count;
	count2=count;
	count3=count;
	for(;count1>0;n0/=10){
		for(;count2>0;count2--){
			for(;count3>0;count3--){
			sum*=num/n0;
			if(sum==num){
				if(count1==0){
					printf("%d\n",sum);
				}
			}
		    }  
		    count3=count;
		}
		count1--;
	} 
	
}
