#include <iostream>
#include "IntNode.h"
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list1;
//    IntNode* headObj = new IntNode(1); // Create IntNode objects
//    IntNode* nodeObj1 = new IntNode(2);
//    IntNode* nodeObj2 = new IntNode(3);
//    IntNode* nodeObj3 = new IntNode(4);
//
//
//    list1.push_front(headObj);
//    list1.push_front(nodeObj1);
//    list1.push_front(nodeObj2);
//    list1.push_front(nodeObj3);
//    list1.print();


    list1.LoadData("num.txt");
    cout << "print linked list" << endl;
    list1.printList();
    list1.multiplyBy2();
    list1.SaveData("num1.txt");

    cout << "override insertion operator" << endl;
    cout << list1;

    return 0;
}

//int main() {
//    IntNode* headObj  = nullptr; // Create IntNode objects
//    IntNode* nodeObj1 = nullptr;
//    IntNode* nodeObj2 = nullptr;
//    IntNode* nodeObj3 = nullptr;
//    IntNode* currObj  = nullptr;
//
//    // Front of nodes list
//    headObj = new IntNode(-1);
//
//    // Insert nodes
//    nodeObj1 = new IntNode(555);
//    headObj->InsertAfter(nodeObj1);
//
//    nodeObj2 = new IntNode(999);
//    nodeObj1->InsertAfter(nodeObj2);
//
//    nodeObj3 = new IntNode(777);
//    nodeObj1->InsertAfter(nodeObj3);
//
//    // Print linked list
//    currObj = headObj;
//    while (currObj != nullptr) {
//        currObj->PrintNodeData();
//        currObj = currObj->GetNext();
//    }
//
//    return 0;
//}