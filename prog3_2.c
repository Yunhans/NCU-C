#include <stdio.h>
#include <stdlib.h>
int main(void){
    short sum,s=32767;
    unsigned short int s1 = s + 1;

    sum = s + 1;
    printf("s+1=%d\n",sum);

    sum = s + 2;
    printf("s+2=%d\n",sum);

    printf("s1+1=%d\n",s1);

    system("pause");
    return 0;
}