#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 5, b= 10;
    void swap( int *, int *);
    printf("The number before swapping is %d %d\n",a,b);
    swap(&a,&b);
    printf("The number after swapping is %d %d",a,b);
}
