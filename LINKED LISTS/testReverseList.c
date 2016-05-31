/*  testReverseNode implementation
 *  2013s1 Practice Prac Exam #1
 *  UNSW comp1917
 *
 *  Created by Richard Buckland
 *  Share freely CC-BY-3.0
 *
 */
//
// this program runs a simple test on a reverse

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "reverseList.h"

#define FIRST   42
#define SECOND  0
#define THIRD   21
#define FOURTH  0xBEA
                      //R

void testReverse (void);
void testReverseEmpty (void);
void testReverseOne (void);
void testReverseTwo (void);
void testReverseThree (void);

int main (int argc, const char * argv[]) {
   testReverse();
   return EXIT_SUCCESS;
}

void testReverse (void) {

   printf ("Testing reverse.\n");
   testReverseEmpty();
   testReverseOne();
   testReverseTwo();
   testReverseThree();
   printf ("\n");
   printf ("All tests passed.  You are Awesome!\n");
}


void testReverseEmpty (void) {
   printf ("testing reverse an empty Node ...\n");
   list l;
   l.head = NULL;
   List l2 = reverse (&l);
   assert (l.head == l2->head);
   printf ("passed\n");
}

void testReverseOne (void) {
   printf ("testing reverse a Node of size 1...\n");
   // create a simple Node on the stack
   list first;
   first.head = NULL;

   List inputNode = &first;
   List outputNode;

   node n;
   first.head = &n;
   n.value = FIRST;
   n.next  = NULL;

   printf ("...checking output Node is reversed ...\n");
   outputNode = reverse (inputNode);

   assert (outputNode->head == &n);
   assert (outputNode->head->next == NULL);

   printf ("...checking node values are not altered\n");
   assert (n.value  == FIRST);

   printf ("...passed\n");

}

void testReverseTwo (void) {
   printf ("testing reverse a Node of size 2...\n");
   // create a simple Node on the stack
   list first;
   first.head = NULL;
   node second;

   List inputNode = &first;
   List outputNode;

   node n;
   n.value = FIRST;
   n.next  = &second;
    
   second.value = SECOND;
   second.next  = NULL;

   printf ("...checking output Node is reversed ...\n");
   outputNode = reverse (inputNode);

   assert (outputNode->head == &second);
   assert (outputNode->head->next == &n);
   assert (outputNode->head->next->next == NULL);

   printf ("...checking node values are not altered\n");
   assert (n.value  == FIRST);
   assert (second.value == SECOND);

   printf ("...passed\n");

}

void testReverseThree (void) {
   printf ("testing reverse a Node of size 3...\n");
   // create a simple Node on the stack
   list first;
   first.head = NULL;
   node second;
   node third;

   List inputNode = &first;
   List outputNode;
    
   node n;
   n.value = FIRST;
   n.next  = &second;

   second.value = SECOND;
   second.next  = &third;

   third.value = THIRD;
   third.next  = NULL;

   printf ("...checking output Node is reversed ...\n");
   outputNode = reverse (inputNode);

   assert (outputNode->head == &third);
   assert (outputNode->head->next == &second);
   assert (outputNode->head->next->next == &n);
   assert (outputNode->head->next->next->next == NULL);

   printf ("...checking node values are not altered\n");
   assert (n.value  == FIRST);
   assert (second.value == SECOND);
   assert (third.value  == THIRD);

   printf ("...passed\n");

}

