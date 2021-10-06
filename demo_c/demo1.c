#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int print1(){
    // 屏幕打印字符串消息并换行
    puts("Hello World!");
    // 十进制有符号
    printf("%d\n",-16);
    // 十进制无符号
    printf("%u\n",-16);
    // 八进制无符号
    // # 就是带前缀输出
    printf("%o\n", 20);
    printf("%#o\n", 020);
    // 十六进制无符号
    printf("%#x\n", 20);
    double d = 123.4545565;
    // 输出宽度8带4位小数的单精度浮点数
    printf("%8.4f\n", d);
    return 0;
}


int str(){
    // @more https://www.cnblogs.com/tongye/p/10688941.html
    // 字符串的声明
    char math1[5] = {'m','a','t','h','\0'};
    char math2[5] = "muth";
    char math3[] = "math";
    
    // math2的值，给math3
    strcpy(math3, math2);
    printf("%s\n", math3);
    // 返回字符串长度
    printf("%d\n", strlen(math1));
    return 0;
}

int basic(){
    int a = 100;
    char b = 'h';
    float c = 12.2;
    int math[6] = {89,85,90,75,69,95};
    return 0;
}
