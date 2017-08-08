/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <iostream>
using namespace std;

void Print(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    Node* start = head;
    while(start!=NULL)
    {
        cout<<start->data<<endl;
        start = start->next;
    }
}

