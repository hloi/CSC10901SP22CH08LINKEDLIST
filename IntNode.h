//
// Created by hloi on 2/23/2022.
//

#ifndef CSC10901SP22CH08LINKEDLIST_INTNODE_H
#define CSC10901SP22CH08LINKEDLIST_INTNODE_H
#include <iostream>

using std::ostream;

class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    IntNode* GetNext();
    int GetDataVal() const;
    void SetNextNodePtr(IntNode *nextNodePtr);
    void insertAfter(IntNode* node);
    void PrintNodeData();
    ~IntNode();
    bool operator==(const IntNode* other);
    void setDataVal(int dataVal);
    friend ostream& operator<<(ostream& out, const IntNode& node);
    // friend ostream& operator>>(ostream& in, const IntNode& node);
    // override the extaction operator for the node class.
private:
    int dataVal;
    IntNode* nextNodePtr;

};


#endif //CSC10901SP22CH08LINKEDLIST_INTNODE_H
