/*
 *  reverseList.c
 *  2013s1 Practice Prac Exam #1
 *  UNSW comp1917
 *
 *  Created by INSERT YOUR NAME HERE
 *  Share freely CC-BY-3.0
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "reverseList.h"

List reverse (List inputList) {
    Node current = inputList->head;
    List l = malloc(sizeof(struct _list));
    if(current == NULL) {
        return l;
    } else {
        int count = 0;
        while(current != NULL) {
            count++;
            current = current->next;
        }
        Node* array = malloc(sizeof(Node)*count);
        current = inputList->head;
        int counter = 0;
        while(current->next != NULL) {
            array[counter] = current;
            counter++;
        }
        l->head = array[counter-1];
        current = l->head;
        while(counter > 0) {
            counter--;
            current->next = array[counter];
            current = current->next;
        }
    }      
    return l;
}
