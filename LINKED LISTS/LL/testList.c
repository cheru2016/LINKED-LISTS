  destroy(l);

       //1 Node list
       // median is 1
       l = newList();
       append(l, 1);
       assert(median(l) == 1);
       printf("median Test2 passed.\n");

       // 0->1->2->X
       // median(l) = 1
       l = newList();
       append(l, 0);
       append(l, 1);
       append(l, 2);
       assert ( median(l) == 1 );
       destroy(l);
       printf("median Test3 passed.\n");

       // 2->3->5->6->X
       // median(l) = 4
       l = newList();
       append(l, 2);
       append(l, 3);
       append(l, 5);
       append(l, 6);
       assert(median(l) == 4);
       printf("median Test4 passed.\n");

       // 2->3->5->6->1000->X
       // median(l) = 5
       append(l, 1000);
       assert(median(l) == 5);
       printf("median Test5 passed.\n");
       destroy(l);
    }






