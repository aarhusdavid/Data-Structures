#include <iostream>

using namespace std;

class DoubleListNode
{
    public:

    //constructor/destructor
    DoubleListNode();
    DoubleListNode(int d);
    ~DoubleListNode();

    
    int data;
    DoubleListNode *next;
    DoubleListNode *prev;




};
