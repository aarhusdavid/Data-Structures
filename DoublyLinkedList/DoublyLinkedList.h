#include <iostream>
#include "DoubleListNode.h"

template <class T> class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        ~DoublyLinkedList();

        DoubleListNode *front;
        DoubleListNode *back;
        unsigned T size;

        void insertFront(T d);
        void insertBack(T d);

        T removeFront();
        T removeBack();
        DoubleListNode* remove();

        T deletePos(T position); //aka removeAt()
        T find(T d);

        bool isEmpty();
        void printList();
        unsigned T getSize();

};

template <class T> //declares template class
DoublyLinkedList<T>::DoublyLinkedList()
{
    size = 0;
    front = NULL;
    back = NULL;
}

template <class T> //declares template class
DoublyLinkedList<T>::~DoublyLinkedList()
{
    //research it
    //you will have to interate through the list
}

template <class T> //declares template class
void DoublyLinkedList<T>::insertFront(T d)
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

template <class T> //declares template class
T DoublyLinkedList<T>::removeFront()
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
    T tmp = front->data;
    ft->next = NULL;
    delete ft;
    size--;

    return tmp;
}

template <class T> //declares template class
void DoublyLinkedList<T>::insertBack(T d)
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

template <class T> //declares template class
T DoublyLinkedList<T>::removeBack()
{
    //make yourself//use removeFront()
}

template <class T> //declares template class
DoubleListNode* DoublyLinkedList<T>::remove(T d)
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
