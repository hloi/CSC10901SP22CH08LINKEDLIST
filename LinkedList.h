//
// Created by hloi on 2/23/2022.
//

#ifndef CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H
#define CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H

#include "IntNode.h"

class LinkedList {
public:
    LinkedList();
    void push_front(IntNode* node);
    void push_back(IntNode* node);

    void print();
    IntNode *getHead() const;
    IntNode *getTail() const;
    void insertAfter(IntNode* node, int pos);
    ~LinkedList();
    void printList();

private:
    IntNode* head;
    IntNode* tail;


};


#endif //CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H
