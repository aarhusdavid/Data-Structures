#include <iostream>

using namespace std;

class GenStack
{
    public:
    GenStack(); //constructor
    GenStack(int maxSize); //overloaded constructor
    ~GenStack(); //destructor

    void push(char d);
    char pop();
    char peek(); //aka top()

    bool isFull();
    bool isEmpty();

    int size;
    int top;

    char *myArray; //pointer to characters, pointer is a memory address


};

GenStack::GenStack() //default constructor
{
    myArray = new char[10];
    size = 10;
    top = -1;
}

GenStack::GenStack(int maxSize)
{
    myArray = new char[maxSize];
    size = maxSize;
    top = -1;
}

GenStack::~GenStack()
{
    delete myArray;
    // lets build some characters
    // your job to research this
}

void GenStack::push(char d)
{
    //need to check error/boundary check
    //this is your job
    myArray[++top] = d;
}

char GenStack::pop()
{
    //error checking, make sure its not isEmpty

    return myArray[top--];
}

char GenStack::peek()
{
    //check if isEmpty
    return myArray[top];
}

bool GenStack::isFull()
{
    return (top == size-1);
}

bool GenStack::isEmpty()
{
    return (top == -1);
}
