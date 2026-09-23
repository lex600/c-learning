#include<stdio.h>
int main(){
	int M,N;
	printf(" ‰»Î£∫");
	scanf("%d %d",&M,&N);
	int n=M;
	int div=2;
	int num; 
	int sum;
	for(;n<=N;n++){
		div=2;
		for(;div<n;div++){
			if(n%div==0)break;
		}
		if(div==n){
			printf("%d ",n);	
			num++;
			sum+=n;
			
		}
		
	}
	printf("\n%d %d",num,sum);
}
