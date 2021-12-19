#include<stdio.h>
#include<stdlib.h>

int func(int a, int b)
    {
        if(b<a){
            a= 1;
            b = b+a;
            return func(a,b+a);
        }
        return a + b + 1;
    }

    int main()
{

    // // 11
    // int pp,qq,rr;
    // pp = 2;
    // qq = 5;
    // rr = 6;

    // qq =(6 & 4) + rr;
    // qq = (10&6)&pp;
    // pp = 9+rr;
    // printf("%d\n", pp+qq+rr); //23

    // // 12
    // int p = 5, q = 5, r = 10;
    // for(r = 4;r<=8;r++){
    //     q = (5^7)+p;
    //     if((3^4)<r){
    //         break;
    //     }else{
    //         p = p+r;
    //     }
    // }
    // printf("%d\n",p+q); //56

    // // 13
    // int p = 3, q = 10, r = 12;
    // p = (p+4)+q;
    // q = q+r;
    // p = (11^2) ^p;
    // p = (9^12) + q;
    // printf("%d\n", p+q+r); //61

    // // 14
    // int func(int a, int b)
    // {
    //     if (a + 10 > b || a > 20)
    //     {
    //         return func(a - 10, a + 10);
    //     }
    //     return a + b + 10;
    // }

    // int ans = func(2, 8);
    // printf("%d\n",ans ); //14

    // // 15
    // int a = 2, b = 7, c = 6;
    // if((b^a^c) < (a^c^b)){
    //     if((a^b^c) > (c^a)){
    //         c = a&b;
    //     }
    //     c = 7&a;
    // }else{
    //     if(a>b){
    //         a = 11+b;
    //     }
    // }
    // printf("%d\n", a+b+c); //15

    // //16
    // int a = 1,b=4, c = 8;
    // if(b>c || (a+b) < (b-a)){
    //     a = (7+10)+a;
    //     b = (8+5)+a;
    // }
    // printf("%d\n", a + b+c); //13

    // // 17
    // int p =4,q = 2,r = 7;
    // q = (7+5)+r;
    // r = (p+5)+r;
    // if((q+5)<(5-q)){
    //     p = (r+r) + q;
    //     r = p+p;
    // }
    // printf("%d\n", p + q + r); //39

    // // 18
    // int j,m=2;
    // int a[4] = {2,1,1,2};
    // m = m^a[2];
    // if(a[1]>1){
    //     m= m^1;
    // }else{
    //     m = m^2;
    // }
    // printf("%d\n",m); //1
    
    // // 19
    // int funn(int a, int b)
    // {
    //     if (a > 0 && b > 0)
    //     {
    //         return funn(0, 1 + funn(0, 11 + funn(0, 111 + funn(0 + 1111 + funn(0, 1)))));
    //     }
    //     b = 0;
    //     return a + b;
    // }
    // int a = 1,b=1;
    // int ans =  funn(a,b);
    // printf("%d\n", ans); //0


    // // 20
    // int a = 3,b = 4,c= 5;
    // if((b-c+a)< (a-b)){
    //     a = (a+9)&a;
    //     b = (c&c) + a;
    //     if((a+6)>(c-a)){
    //         c = (c+c) + c;
    //     }
    //     c = b+a;
    //     c = 8+a;
    // }
    // printf("%d\n",a+b+c); //12

    // // 21
    // int p = 0,q = 4,r = 8;
    // for(int r=3;r<=7 ;r++){
    //     if((q-r) < (r+q)){
    //         break;
    //     }
    //     p = (6+3) + r;
    //     p = (q+r)+r;
    // }
    // printf("%d\n",p+q); //4

    // //22
    // int p = 7,q = 8,r = 7;
    // r = (1^4) + r;
    // p = (q+12)+r;
    // q = (p+2)&p;
    // if((r&q)<q || 5>q){
    //     q = r+p;
    //     p = (r+r)+p;
    // }
    // p = (q&9) +p;
    // p = (r+r)+p;
    // printf("%d\n",p+q+r); //144

    // // 23
    // int p = 4,q = 5,r = 6;
    // q = 3+r;
    // p = q&p;
    // r = q+r;
    // p = p+q;
    // printf("%d\n",p+q+r); //33


    // // 24
    // int p = 1,q=5,r = 5;
    // for(r = 3;r<=6;r++){
    //     if((p&r)< (q^p)){
    //         break;
    //     }
    //     q = (1+5)+r;
    //     q = r+q;
    // }
    // printf("%d\n",p+q); //6

    // // 25
    // int a = 0,b = 5,c = 8;
    // if((b^c^a)< (c+a+b)){
    //     c = (a+1)^b;
    //     b =b+a;
    // }
    // printf("%d\n",a+b+c); //13

    int a = 5, b = 2;
    int ans =  func(a,b);
    printf("%d\n", ans); 

    return 0;
}

