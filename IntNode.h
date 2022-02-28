//
// Created by hloi on 2/23/2022.
//

#ifndef CSC10901SP22CH08LINKEDLIST_INTNODE_H
#define CSC10901SP22CH08LINKEDLIST_INTNODE_H


class IntNode {
public:
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    IntNode* GetNext();
    int GetDataVal() const;
    void SetNextNodePtr(IntNode *nextNodePtr);
    void PrintNodeData();
//    ~IntNode();

private:
    int dataVal;
    IntNode* nextNodePtr;


};


#endif //CSC10901SP22CH08LINKEDLIST_INTNODE_H
