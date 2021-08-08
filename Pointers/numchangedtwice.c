#include <stdio.h>

int main(){
    int num = 5;
    int *ptr = &num;
    printf("The value of Num before changing is %d \n",*ptr);

    num = 15;

    printf("The value of Num after changing is %d \n",*ptr);

    *ptr = 20;

    printf("Changing value of num using pointer variable = %d \n",*ptr);

}