/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    Node* startA = headA;
    Node* startB = headB;

    int countA = 0, countB = 0;

    while((startA!=NULL) && (startB!=NULL))
    {
        if((startA->data)==(startB->data))
        {
            startA = startA->next;
            startB = startB->next;
            //countA++;
            //countB++;
        }

        else
            return 0;
    }

    if((startA!=NULL) || (startB!=NULL))
        return 0;
    else
        return 1;

}

