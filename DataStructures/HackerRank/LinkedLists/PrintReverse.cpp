//
// Created by Abhiram MV on 8/8/17.
//

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    Node* ptr = head;
    //ptr = ptr->next;
    if(ptr==NULL)
        return;



    ReversePrint(ptr->next);
    cout<<ptr->data<<endl;


}

