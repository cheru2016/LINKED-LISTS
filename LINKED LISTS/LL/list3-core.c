

// Michael Saffa
// Kora Tuesday with Harry Day
// Saturday the 28th of May 2016
// This is a Linked List thing
// This was very hard
// Thank you for reading
// :D

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list3-core.h"

// print out a list
void showList (list listToPrint) {
    link current = listToPrint->head;
    while(current != NULL) {
        printf("[%d]->", current->value);
        current = current->next;
    }
    printf("X\n");
}

// inset item at the front of the list
void frontInsert (list l, int item) {
    link newNodeInsert = malloc(sizeof(node));
    assert (newNodeInsert != NULL);
    newNodeInsert->value = item;
    newNodeInsert->next = l->head;
    l->head = newNodeInsert;
}

// count the number of items in the list
int numItems (list l) {
    int count = 0;
    assert(l != NULL);
    link current = l->head;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// insert at end of list
void append (list l, int value) {
    link curr = l->head;
    link pntNewNode = malloc(sizeof(node));
    assert (pntNewNode != NULL);
    pntNewNode->value = value;
    pntNewNode->next = NULL;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = pntNewNode;
}

// find the value stored at position i
// i MUST be a valid position in the list
// dont call this on positions outside the list
int lookup (list l, int position) {
    link curr = l->head;
    int count = 0;
    while(count != position) {
        count++;
        curr = curr->next;
    }
    return curr->value;
}

