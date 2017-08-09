//
// Created by Abhiram MV on 8/8/17.
//

/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    // Complete this method
    //Node* start = head;
    int i = 1;

    if(position == 0)
    {
        head = head->next;
        return head;
    }

    else
    {
        Node* cur = head;
        while(cur!=NULL)
        {
            if(i == position)
            {
                cur->next = cur->next->next;
            }

            cur = cur->next;
            i++;
        }

        return head;
    }

}

