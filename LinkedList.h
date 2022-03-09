//
// Created by hloi on 2/23/2022.
//

#ifndef CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H
#define CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H

#include "IntNode.h"
#include <string>

using std::string;

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
    int LoadData(string filename);
    void multiplyBy2();  // take each value in the linked list and multiply it by 2
    int SaveData(string filename);  // save linked back into a file.
    friend ostream& operator<<(ostream& out, const LinkedList& node);
    // friend ostream& operator>>(ostream& in, const LinkedList& node);
private:
    IntNode* head;
    IntNode* tail;


};


#endif //CSC10901SP22CH08LINKEDLIST_LINKEDLIST_H
