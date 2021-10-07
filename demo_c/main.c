
// 以“#”号打头的语句都是预处理指令
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <mm_malloc.h>

// 声明常量
#define HUA 66.88

typedef struct node{
    int data;
    struct node *next;
} Node;

struct ListNode {
 int val;
 struct ListNode *next;
};

union data {
    int length;
    short size;
    char tag;
};


int main(){
    enum week { Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
    printf("%d", 11);
    bool flag = true;
    
    return 0;
}
