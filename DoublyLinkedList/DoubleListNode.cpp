#include "DoubleListNode.h"
#include "DoublyLinkedList.h"
#include <iostream>


DoubleListNode::DoubleListNode(int d)
{
    data = d;
    next = NULL; //nullptr
    prev = NULL;

}

DoubleListNode::~DoubleListNode()
{
    next = NULL;
    prev = NULL;
}
