#include <stdio.h>
#include <ctype.h>
#include <math.h>
void more(){
    
    char a = 'a';
    // 单个字母转大写
    char a1 = toupper(a);
    printf("%c\n", a1);
    // 单个字母转小写
    char a2 = tolower(a1);
    printf("%c\n", a2);
    // 判断是否是字母
    printf("%d\n", isalpha(a));
    // 判断是否是数字
    printf("%d\n", isdigit(a));
    // 判断是否是小写字母
    printf("%d\n", islower(a));
}

void math(){
    // 生成随机数
    // int a = rand();
    // 平方根
    int a = sqrt(9);
    // 绝对值
    int b = fabs(-100);
    // 取整操作
    int c = ceil(1.6);
    int d = floor(1.6);
    int e = round(4.6);
    printf("%d %d %d \n",c, d, e);
    // 指数运算
    int f = pow(2,5);
    printf("%d %d %d \n", a, b, f);
    
    // 比较
    int max = fmax(e, d);
    int min = fmin(e, d);
    printf("%d %d \n", max, min);
}
