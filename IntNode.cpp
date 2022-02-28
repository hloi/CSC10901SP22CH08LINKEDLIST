//
// Created by hloi on 2/23/2022.
//
#include <iostream>

#include "IntNode.h"

using namespace std;

// Constructor
IntNode::IntNode(int dataInit, IntNode* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

// Print dataVal
void IntNode::PrintNodeData() {
    cout << this->dataVal << endl;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

void IntNode::SetNextNodePtr(IntNode *nextNodePtr) {
    this->nextNodePtr = nextNodePtr;
}

int IntNode::GetDataVal() const {
    return dataVal;
}

IntNode::~IntNode() {
    cout << "Node destructor" << endl;
    delete this->nextNodePtr;
}
