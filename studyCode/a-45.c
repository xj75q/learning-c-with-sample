#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *current = NULL;

//display the list
void printList() {

    struct node *ptr = head;

    printf("[head] =>\n");
    //start from the beginning
    while (ptr != NULL) {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }

    printf(" \n[null]\n");
}


// 将新节点插入到第一个位置
void insert(int data) {
    //create a link
    struct node *link = (struct node*) malloc(sizeof(struct node));

    //link->key = key;
    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}



int main() {

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);

    printList();
    return 0;
}

