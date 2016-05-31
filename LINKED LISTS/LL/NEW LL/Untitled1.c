//Free node
//Return value we delete
int deleteFront(List list) {
    assert(list != NULL);
    assert(list->first != NULL);
    link firstNode = list->first;
    int value = firstNode->value;

    list->first = firstNode->next;
    free(firstNode);
    return value;
}

int deleteEnd(List list) {
    link curr;
    link prev = NULL;
    curr = list->first;

    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    } else {
        list->first = NULL;

    int value = curr->value;
    prev->next = current->next;
    free(curr);
    return value;
}

list copy(List l) {
    //created new empty list
    List copiedList = malloc(sizeof(struct _list));
    copiedList->first = NULL;

    link endList = NULL;
    //for every node in original make copy and connect to end of new list
    link curr = l->head;

    while(curr != NULL) {
        //create copy of curr node
        n = malloc(sizeof(struct _node));
        n->value = curr->value;
        n->next = NULL;
        //connecting new nodeto the copiedList
        if(copiedList->first == NULL) {
            copiedList->first = n;
            endList = n;
        } else {
            endList->next = n;
            endList = n;
        //moves along to next node
        curr = curr->next;
    }

