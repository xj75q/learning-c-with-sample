#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void reverse_print(struct node *list) {
    if (list == NULL) {
        printf("[null] => ? \n");
        return;
    }
    reverse_print(list->next);
    printf("data => %d \n", list->data);

}

//Create Linked List
void insert(int data) {
    // Allocate memory for new node;
    struct node *link = (struct node*) malloc(sizeof(struct node));

    link->data = data;
    link->next = NULL;

    // If head is empty, create new list
    if (head == NULL) {
        head = link;
        return;
    }


    current = head;

    // move to the end of the list
    while (current->next != NULL)
        current = current->next;

    // Insert link at the end of the list
    current->next = link;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);

    reverse_print(head);

    return 0;
}

