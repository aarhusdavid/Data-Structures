#include "GenQueue.h"
#include <iostream>

using namespace std;

GenQueue::GenQueue()
{
    //default constructor
}

GenQueue::GenQueue(int maxSize)
{
    myQueue = new char[maxSize];
    size = maxSize;
    head = 0;
    tail = -1;
    int numElements = 0;
}

GenQueue::~GenQueue()
{
    //destructor
}

void GenQueue::insert(char d)
{
    //add error checking
    if(tail == size - 1)
    {
        tail = -1;
    }
    myQueue[++tail] = d;
    ++numElements;
}

char GenQueue::remove()
{
    //error checking
    char c = '\0';
    c = myQueue[head];
    ++head;

    if(head == size)
    {
        head = 0;
    }
    --numElements;

    return c;
}

char GenQueue::peek()
{
    return myQueue[head];
}

bool GenQueue::isFull()
{
    return (numElements == size);
}

bool GenQueue::isEmpty()
{
    return (numElements == 0);
}

int GenQueue::getSize()
{
    return numElements;
}
