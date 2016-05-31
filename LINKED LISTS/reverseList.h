/*
 *  reverseList.h
 *  2013s1 Practice Prac Exam #1
 *  UNSW comp1917
 *
 *  Created by Richard Buckland
 *  Share freely CC-BY-3.0
 *
 */
 
typedef struct _node* Node;
typedef struct _list* List;

/*typedef struct node *list;

typedef struct node {
   int   value;
   list  rest;
} node;
*/
typedef struct _node {
    char value;
    Node next;
} node;

typedef struct _list {
    Node head;
} list;
// reverse a linked list by pointer manipulation
// return pointer to head of the (now reversed) list
// (which was previously the last node in the list)
// you must do this by rearranging pointers stored in
// the nodes, not by altering the integer values in the
// nodes.
//
// probably the best way to do this is to repeatedly
// remove the first element from the input list and
// insert it at the front of the output list.
// dont forget to draw pictures
List reverse (List inputList);


