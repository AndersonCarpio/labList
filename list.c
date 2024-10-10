#include<stdlib.h>
#include "list.h"
int length(struct Node* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

struct Node* buildOneTwoThree(){
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));

    head->next->data = 2;
    head->next->next = malloc(sizeof(struct Node));

    head->next->next->data = 1;
    head->next->next->next = 0;

    return head;
}

int count(struct Node* head, int searchFor){
    int counter = 0;
    while(head){
        int data = head->data;
        if(data == searchFor) counter++;
        head = head->next;
    }

    return counter;

}
