#include<stdio.h>
int main(){
	float weight,value;
	printf("enter your weight in pounds:");
	scanf("%f",&weight);
	value=1700*weight*14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);
} 
