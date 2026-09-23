#include<stdio.h>
int main()
{
int amount=100;
int price=0;

printf("请输入钱数和票面");
scanf_s("%d%d",&price,&amount);

int change=amount-price;
printf("找%d元。",change);
return 0;
}
