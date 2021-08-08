#include <stdio.h>
#define MAX 10

int main() {

    int arr[MAX],l;
    int getarray(int *, int);
    void showarray(int *, int);

    l = getarray(arr, MAX);
    showarray(arr, l); 
}

int getarray(int *a, int n){
    int i,x;
    while(i<n){
        printf("Enter the %dth value",i);
        scanf("%d",&x);
        *(a + i) = x;
        i++;
    }

    return i;
}

void showarray(int *a, int s){

    for(int i=0;i<s;i++){
        printf("%d\n",*(a + i));
    }
}