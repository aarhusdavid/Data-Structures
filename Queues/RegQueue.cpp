#include "RegQueue.h"
#include <iostream>

using namespace std;

RegQueue::RegQueue()
{
    //default constructor
}

RegQueue::RegQueue(int maxSize)
{
    myQueue = new char[maxSize];
    size = maxSize;
    front = 0;
    back = -1;
    int numElements = 0;
}

RegQueue::~RegQueue()
{
    //destructor
}

void RegQueue::insert(char d)
{
    //add error checking
    if(back == size - 1)
    {
        back = -1;
    }
    myQueue[++back] = d;
    ++numElements;
}

char RegQueue::remove()
{
    //error checking
    char c = '\0';
    c = myQueue[front];
    ++front;

    if(front == size)
    {
        front = 0;
    }
    --numElements;

    return c;
}

char RegQueue::peek()
{
    return myQueue[front];
}

bool RegQueue::isFull()
{
    return (numElements == size);
}

bool RegQueue::isEmpty()
{
    return (numElements == 0);
}

int RegQueue::getSize()
{
    return numElements;
}
