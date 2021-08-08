#include <stdio.h>

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y= 10;
    void swap(int, int);
    printf("\nThe values before swapping = %d %d",x,y);
    swap(x,y);
    printf("\nThe values after swapping = %d %d",x,y);

}