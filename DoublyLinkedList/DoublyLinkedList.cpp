#include <DoubleListNode.h>
#include <DoublyLinkedList.h>
#include <iostream>



DoublyLinkedList::DoublyLinkedList()
{
    size = 0;
    front = NULL;
    back = NULL;
}

DoublyLinkedList::~DoublyLinkedList()
{
    //research it
    //you will have to interate through the list
}

void DoublyLinkedList::insertFront(int d)
{
    DoubleListNode *node = new DoubleListNode(d);
    if(size == 0)
    {
        back = node;
    }
    else
    {
        //not an empty list
        front->prev = node;
        node->next = front;
    }
    front = node;
    size++;
}

int DoublyLinkedList::removeFront()
{
    //check if empty before attempting to remove

    DoubleListNode *ft = front;
    if(size == 1)
    {
        //its the node in the list
        back = NULL;
    }
    else
    {
        //we have more than one element in the list
        front->next->prev = NULL;
    }
    front = front->next;
    int tmp = front->data;
    ft->next = NULL;
    delete ft;
    size--;

    return tmp;
}

void DoublyLinkedList::insertBack(int d)
{
    DoubleListNode *node = new DoubleListNode(d);
    if(size == 0)
    {
        //we have an empty list
        front = node;
    }
    else
    {
        //not an empty list
        back->prev = node;
        node->prev = back;
    }
    back = node;
    size++;
}

int DoublyLinkedList::removeBack()
{
    //make yourself//use removeFront()
}

DoubleListNode* DoublyLinkedList::remove(int d)
{
    //check if list is not empty before attempting to remove
    DoubleListNode *curr = front;

    while(curr->data != d)
    {
        curr = curr->next;
        if(curr == NULL) //we did not find the value
        {
            return NULL;
        }
    }

    //if we get to this point it means we found it

    //lets check if the node is the insert
    if(curr == front)
    {
        front = curr->next;
    }
    else
    {
        //its not the front
        curr->prev->next = curr->next;
    }

    if(curr == back)
    {
        back = curr->prev;
    }
    else
    {
        //its not the back
        curr->next->prev = curr->prev;
    }

    curr->next = NULL;
    curr->prev = NULL;
    size--;

    return curr;
    delete curr;

}
