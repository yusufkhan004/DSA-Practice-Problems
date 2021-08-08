#include <stdio.h>

int main() {
    int p = 2,q = 3,sump = 0;
    int *a = &p;
    int *b = &q;
    int *sum = &sump;
    
    *sum = *a + *b;

    printf("Sum of p and q is %d \n",*sum);
    printf("sum");
    

}