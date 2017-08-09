//
// Created by Abhiram MV on 8/8/17.
//

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node* newNode = new Node;
    newNode->data = data;
    int i = 1;
    
    if(head == NULL)
        return newNode;
    else if(position == 0)
    {
        newNode->next = head;
        return newNode;
        
    }
    
    else
    {
        Node* cur = head;
        while(cur!=NULL)
        {
            if(i == position)
            {
                newNode->next = cur->next;
                cur->next = newNode;
                
            }
            
            cur = cur->next;
            i++;
            
        }
        
        return head;
    }
}

