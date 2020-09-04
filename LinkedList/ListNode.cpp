



ListNode::ListNode(){}

ListNode::ListNode(int d)
{
    data = d;
    next = NULL; //nullptr
    prev = NULL;

}

ListNode::~ListNode()
{
    if(next == NULL)
        delete next;
}
