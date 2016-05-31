       free(l);
    }

    //appends a node of value to the end of the list
    void append(List l, int value) {
       Node newNode = malloc(sizeof(node));
       newNode->value = value;
       newNode->next = NULL;
       Node curNode = l->head;
       if ( curNode==NULL ) {
          l->head = newNode;
       } else {
          while ( curNode->next!=NULL ) {
             curNode = curNode->next;
          }
          curNode->next = newNode;
       }
    }

    //returns the int value of the node at index
    //assumes input index is within range of the list's length
    int getValue(List l, int index) {

       Node curNode = l->head;
       assert (curNode!=NULL);
       int counter = 0;
       while (counter<index) {
          curNode = curNode->next;
          counter++;
       }
       return curNode->value;
    }



