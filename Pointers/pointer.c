#include <stdio.h>

int main(){

    int i = 5;
    int *ptr = &i;

    printf("%u\n",&i);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
}