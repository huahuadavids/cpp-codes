//
//  chain.c
//  demo_c
//
//  Created by David Zhang on 2021/10/7.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mm_malloc.h>

typedef struct node{
    int data;
    struct node *next;
} Node;


void chain(){
    Node *node3 = (Node*)malloc(sizeof(Node));;
    node3->data = 3;
    node3->next = NULL;
    
    Node *node4 = (Node*)malloc(sizeof(Node));;
    node4->data = 4;
    node4->next = NULL;
    
    
    Node *node1 = (Node*)malloc(sizeof(Node));;
    node1->data = 2;
    node1->next = node4;
    
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = node1;


    Node *q;
    // 遍历查找
    for(q=head; q!=NULL; q=q->next){
        printf("%d\n", q->data);
    }
    puts("end");
    // 插入node3
    for(q=head; q!=NULL; q=q->next){
        if(q->data == 2){
            Node *next = q->next;
            q->next = node3;
            node3->next = next;
        }
    }
    
    for(q=head; q!=NULL; q=q->next){
        printf("%d\n", q->data);
    }

}
