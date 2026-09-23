#include<stdio.h>
int main(){
	//初始化
	int price=0,bill=0;
	//读入金额和票面 
	printf("请输入金额：");
	scanf("%d",&price); 
	printf("请输入票面：");
	scanf("%d",&bill);
	/*计算找零 
	计算找零
	计算找零*/
	if(bill>=price) 
	printf("找%d元\n",bill-price);
	else
	printf("票面不足");}

