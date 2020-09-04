#include <iostream>


class GenQueue
{
    public:
        GenQueue(); //default constructor
        GenQueue(int maxSize); //overloaded constructor
        ~GenQueue(); //destructor

        //core fuctions
        void insert(char d);
        char remove();

        //aux functions
        char peek();
        bool isFull();
        bool isEmpty();

        //variables
        int head; //front
        int tail; //rear
        int size;
        int numElements;
        int getSize();

        char *myQueue; //array





};
