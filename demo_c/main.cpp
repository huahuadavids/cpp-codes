// 以“#”号打头的语句都是预处理指令


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "demo1.c"
// 声明常量
#define HUA 66.88

void scan(){
  char Char_A;
  printf("请输入字符然后回车：\n");
  scanf("%c",&Char_A);
  printf("\n使用scanf()获取输入值以后：\n");
  printf("变量Char_A的值为：%c\n",Char_A);
}

int main(){
    scan();
   // system 可执行shell 命令
    // system("pwd");
    return 0;
}
