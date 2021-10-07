#include <stdio.h>

void order(){
    if(2 > 1){
        puts("2 > 1");
    }
    if(!(1 > 2)){
        puts("1 <  2");
    }
    
    int a = 2 > 1 ? 100: 99;
    printf("%d\n", a);
    
//    int b = 10;
//    while (b > 0) {
//        printf("b=%d\n", b);
//        b--;
//    }
    
    int m = 120, n = 64;
    int r = m % n;          //r取m除以n的余数
    while(r != 0)       //辗转相除
    {
        m = n;          //小数给m
        n = r;          //余数给n
        r = m % n;      //r再次取m除以n的余数
    }
    printf("最大公约数是%d\n",n);
    
}
