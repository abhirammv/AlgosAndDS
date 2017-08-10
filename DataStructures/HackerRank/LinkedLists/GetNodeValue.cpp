/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == NULL)
        return 0;
    else
    {
        Node* start = head;
        int len = 0;
        int diff = 0;
        while(start!=NULL)
        {
            len++;
            start = start->next;
        }
        
        start = head;
        diff = len - positionFromTail;
        for(int i = 1; i<diff; i++)
            start = start->next;
            
        return start->data;
    }
    return 0;
}

