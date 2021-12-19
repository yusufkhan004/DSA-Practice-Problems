// 15
    int a = 2, b = 7, c = 6;
    if((b^a^c) < (a^c^b)){
        if((a^b^c) > (c^a)){
            c = a&b;
        }
        c = 7&a;
    }else{
        if(a>b){
            a = 11+b;
        }
    }
    printf("%d\n", a + b + 