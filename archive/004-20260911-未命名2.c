#include<stdio.h>
int main()
{
int amount=100;
int price=0;

printf("请输入钱数");
scanf_s("%d",&price);
printf("请输入票面");
scanf ("%d",&amount);
int change=amount-price;
printf("找%d元。",change);
return 0;
}
