#include <stdio.h>

int main(){

    int a[] = {1, 2, 3, 4, 5};
    int *p;

    p = a;
    for(int i = 0; i <5;i++){
        //different ways to print the pointer values
        printf("%d\n", *(p+i));
        printf("%d\n",p[i]);
        printf("%d\n",i[p]);
        printf("%d\n",*(i+p));
    }
}