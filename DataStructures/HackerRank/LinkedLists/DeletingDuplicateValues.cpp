/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    Node* start = head;
    while(start->next!=NULL)
    {
        if(start->data == start->next->data)
            start->next = start->next->next;
        else
            start = start->next;

    }

    return head;
}

