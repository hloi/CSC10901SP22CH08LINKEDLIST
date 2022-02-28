/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "IntNode.h"
#include "LinkedList.h"

#include <iostream>
using namespace std;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testIntNode() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        LinkedList list1;
        IntNode* headObj = new IntNode(1); // Create IntNode objects
        IntNode* nodeObj1 = new IntNode(2);
        IntNode* nodeObj2 = new IntNode(3);
        IntNode* nodeObj3 = new IntNode(4);

        list1.push_front(headObj);
        list1.push_front(nodeObj1);
        list1.push_front(nodeObj2);

        IntNode* head = list1.getHead();
        TS_ASSERT_EQUALS(head->GetDataVal(), nodeObj2->GetDataVal());
        IntNode* tail = list1.getTail();
        TS_ASSERT_EQUALS(tail->GetDataVal(), headObj->GetDataVal());
        IntNode* mid = list1.getHead()->GetNext();
        TS_ASSERT_EQUALS(mid->GetDataVal(), nodeObj1->GetDataVal());
        cout << endl;
    }
};
#endif /* NEWCXXTEST_H */
