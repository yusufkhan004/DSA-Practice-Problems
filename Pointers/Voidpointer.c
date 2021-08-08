#include <stdio.h>

int main(){

    int a = 1;
    float b = 3.14;
    double c = 4.53256785858;
    char str[] = "Hello";

    void *vp;

    vp = &a;
    printf("The value of a = %d \n",*((int *)vp));

    vp = &b;
    printf("The value of b = %f \n",*((float *)vp));

    vp = &c;
    printf("The value of c = %lf \n",*((double *)vp));

    vp = &str;
    printf("The value of a = %c",*((char *)vp));


}