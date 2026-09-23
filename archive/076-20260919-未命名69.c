#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main(){
	int row;
	char ch;
	for(row=0;row<ROWS;row++){
		for(ch='A'+row;ch<('A'+CHARS);ch++)printf("%c %d",ch,ch);
		printf("\n");
	}
	
}
