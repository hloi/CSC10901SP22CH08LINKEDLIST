//
// Created by hloi on 2/23/2022.
//
#include <iostream>
#include "LinkedList.h"
#include <fstream>

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

void LinkedList::push_back(IntNode *node) {
    if (head == nullptr) {
        head = node;
        tail = node;
    }
    else {
        tail->SetNextNodePtr(node);
        tail = node;
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
//    IntNode* tmp = head;
//    while (tmp != nullptr) {
//        cout << "Destructor" << endl;
//        IntNode* next = tmp->GetNext();
//        delete tmp;
//        tmp = next;
//    }
    delete head;
}

void LinkedList::insertAfter(IntNode *node, int pos) {
    IntNode* tmp = head;
    int curPos = 0;

    while (tmp != nullptr and curPos < pos) {
        curPos++;
        tmp = tmp->GetNext();
    }
    if (curPos == pos) {
        tmp->insertAfter(node);
    }
}

void LinkedList::printList() {
//    // Print linked list
    IntNode* currObj = head;
    while (currObj != nullptr) {
        currObj->PrintNodeData();
        currObj = currObj->GetNext();
    }
}

int LinkedList::LoadData(string filename) {
    ifstream inFS;   // Input file stream
    int fileNum;     // File data

    // Open file
    cout << "Opening file myfile.txt." << endl;
    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "Could not open file " << filename << endl;
        return 1;
    }

    // Print read numbers to output
    cout << "Reading and printing numbers." << endl;

    inFS >> fileNum;
    int pos = 0;
    while (!inFS.fail()) {
        cout << "num: " << fileNum << endl;
        IntNode* node1 = new IntNode(fileNum);
        this->push_back(node1);
        inFS >> fileNum;
        // override insertion operator for the linked list class

    }
    if (!inFS.eof()) {
        cout << "Input failure before reaching end of file." << endl;
    }

    cout << "Closing file myfile.txt." << endl;

    // Done with file, so close it
    inFS.close();

    return 0;
}

void LinkedList::multiplyBy2() {
    IntNode* currObj = head;
    while (currObj != nullptr) {
        // currObj->PrintNodeData();
        int v = currObj->GetDataVal();
        currObj->setDataVal(v*2);
        currObj = currObj->GetNext();
    }
}

int LinkedList::SaveData(string filename) {
    ofstream outFS; // Output file stream

    // Open file
    outFS.open(filename);

    if (!outFS.is_open()) {
        cout << "Could not open file " << filename << endl;
        return 1;
    }

    // Write to file
    IntNode* currObj = head;
    while (currObj != nullptr) {
        outFS << currObj->GetDataVal();
        outFS << endl;
        currObj = currObj->GetNext();
    }
    // Done with file, so close
    outFS.close();

    return 0;
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

ostream& operator<<(ostream& out, const LinkedList& list1) {
    IntNode* currObj = list1.head;
    while (currObj != nullptr) {
        out << *currObj;
        currObj = currObj->GetNext();
    }
    return out;
}