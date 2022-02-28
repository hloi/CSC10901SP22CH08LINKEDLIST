//
// Created by hloi on 2/23/2022.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

void LinkedList::print() {
    IntNode* tmp = head;
    while (tmp != nullptr) {
        tmp->PrintNodeData();
        tmp = tmp->GetNext();
    }
}

void LinkedList::push_front(IntNode *node) {
    if (head == nullptr) {
        head = node;
        tail = node;
    }
    else {
        node->SetNextNodePtr(head);
        head = node;
    }
}

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

IntNode *LinkedList::getHead() const {
    return head;
}

IntNode *LinkedList::getTail() const {
    return tail;
}

LinkedList::~LinkedList() {
    IntNode* tmp = head;
    while (tmp != nullptr) {
        cout << "Destructor" << endl;
        IntNode* next = tmp->GetNext();
        delete tmp;
        tmp = next;
    }
}


/* Insert node after this node.
 * Before: this -- next
 * After:  this -- node -- next
 */
//void LinkedList::InsertAfter(IntNode* nodeLoc) {
//    IntNode* tmpNext = nullptr;
//
//    tmpNext = ;    // Remember next
//    this->nextNodePtr = nodeLoc;    // this -- node -- ?
//    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next
//}

