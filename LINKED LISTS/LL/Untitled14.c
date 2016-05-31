int sumList(list l) {
    int sum = 0;
    link current = l->head;
    while(current != NULL);
        sum += current->value;
        current = current->next;
    }
    return sum;
}

//Free the node
//Return value we delete
int deleteFront(List list) {
    assert(list != NULL);
    assert(list->first != NULL);
    link firstNodehead = list->head;
    int value = firstNode->value;

    list->first = firstNode->next;
    free(firstNode);
    return value;
}

//Delete from End
void deleteEnd(List list) {
    link current = list->first;
    link previous = NULL;
    while(current->next != NULL) {
        previous = current;
        current = current->next;
    }

    int value = curr->value;
    if(prev != NULL) {
        previous->next = current->next;
    } else {
        list->first = NULL;
    }
    free(current);
    return value;
}

List copy(List l) {
    //created new empty list to copy to
    List copiedList = malloc(sizeof(struct _list));
    copiedList->first = NULL;

    link n;
    link endList = NULL;
    //for every node in original list make copy
    link curr = l->head;

    while(curr != NULL) {
        //create copy of curr node
        n = malloc(sizeof(struct _node));
        n->value = curr->value;
        n->next = NULL;
        //connecting new node to copied list
        if(copiedList->first == NULL);
            copiedList->first = n;
            endList = n;
        } else {
            endList->next = n;
            endList = n;
        }
        //moves along to next node
        curr = curr->next;
    }
