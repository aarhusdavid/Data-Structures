#include <ListNode.h>
#include <GenLinkedList.h>
#include <iostream>


GenLinkedList::GenLinkedList()
{
    size = 0;
    front = NULL; //nullptr
}

GenLinkedList::~GenLinkedList()
{
    //ill let you figure that out
}

unsigned int GenLinkedList::getSize()
{
    return size;
}


void GenLinkedList::printList()
{
    ListNode *curr = front;
    while (curr != NUll)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

void GenLinkedList::insertFront(int d)
{
    ListNode *node = new ListNode(d);
    node->next = front;
    front = node;
    size++;
}

int GenLinkedList::removeFront()
{
    int tmp = front->data;
    ListNode *ft = front;
    front = front->next;
    ft->next = NULL;
    delete ft;
    size--;

    return tmp;
}

int GenLinkedList::detePos(int pos)
{
    int idx = 0;
    ListNode *curr = front;
    ListNode *prev = front;

    while(idx != pos)
    {
        prev = curr;
        curr = curr->next;
        idx++;
    }

    //we have found the position of the node to be deleted, hopefull our pointers are in the right spot

    prev->next = curr->next;
    cur->next = NULL;
    int tmp = curr->data;
    delete curr;
    size--;
    return tmp;
}


int GenLinkedList::find(int d)
{
    int idx = 0;
    ListNode *curr = front;

    while(curr != NULL)
    {
        idx++;
        if (curr->data == d)
        {
            break;
        }

        curr = curr->next;
    }

    if (curr == NULL)
    {
        //we did not find value
        idx = -1;
    }

    return idx;
}
