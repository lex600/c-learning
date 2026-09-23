#include <stdio.h>
int main(){
    int i;
    for(i=0;i<5;i=i+1){
        printf("i=%d\n", i);
    }
    printf("退出循环后 i=%d\n", i);   /* 一定是 5 */
    return 0;
}
