#include <stdio.h>

int main () {
    int a[] = {10, 20, 30, 40, 50, 60};

    // using index
    for (int i = 0; i < 6;++i){
        printf("%d\n",i[a]);
    }

    // using pointers

    for (int i = 0; i <6 ;++i){
        printf("%d\n",*(a + i));
    }
}