#include <stdio.h>

int main(){

    int *max(int *, int *);
    int a=8,b=9, *p;

    p = max(&a,&b);

    printf("the max of two numbers is %d",*p);
}

int *max(int *x, int *y){

    if (*x > *y)
    return x;
    else
    return y;
}