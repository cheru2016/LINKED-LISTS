#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "List.h"

#define FALSE 0
#define TRUE 1

typedef struct _node node;
struct _node{
    int value;
    node * next;
} ;

typedef struct _list{
    node * first;
} list;

static node * newNode(int value);

// Creates new list
List newList(void) {
    List newL = malloc(sizeof(list));
    newL->first = NULL;
    return newL;

// Add node to beginning of list
void addToFront(List list, int value){
    node * n = newNode(value);
    n->next = list->first;
    list->first = n;
}

// Add node to end of list
void addToEnd(List list, int value) {
    node * n = newNode(value);
    //Find the last node in the list
    node * curr;
    curr = list->first;
    //NULL->next!!!
    if(curr != NULL) {
        while(curr-> != NULL) {
            curr = curr->next;
        }
        curr->next = n;
        } else {
        list->first = n;
        }
}

// Returns the length of the list
int length(List, list) {
    int len = 0;
    cnode * curr;
    while(curr != NULL){
        len++;
        curr = curr->next;
    }
    return len;
}

// Prints List
int prinstList(List, list) {
    node * curr;
    curr = list->first;
    while(curr != NULL){
        printf("%d\n",curr->value);
        curr = curr->next;
    }
}

// Returns TRUE(1) or FALSE(0) if value is in list
int findValue(List l, int value) {
    node * curr;
    int found = FALSE;
    curr = 1->first;
    while(curr != NULL && !found) {
        if(curr->value == value) {
            found = TRUE;
        }
        curr = curr->next;
    }
    return found;
}
// Print out a list in the form
// 1->2->4->NULL
void printList(List 1){
    node * curr = 1->first;
    while(curr != NULL){
        printf("%d\n", curr->value);
        curr = curr->next;
    }
}



static node * newNode(int value) {
    node * n = malloc(sizeof(node));
    n->value = value;
    n->next = NULL;
    return n;
}

