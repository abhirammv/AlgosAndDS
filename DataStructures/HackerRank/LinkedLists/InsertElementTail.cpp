//
// Created by Abhiram MV on 8/7/17.
//

/*
Insert Node at the end of a linked list
        head pointer input could be NULL as well for empty list
Node is defined as
struct Node
{
    int data;
    struct Node *next;
}
*/

Node* Insert(Node *head,int data) {
    Node* node = new Node;
    node->data = data;

    if(head==NULL)
        return node;

    else
    {
        Node* start = head;
        while(start->next!=NULL)
            start = start->next;

        start->next = node;
        return head;

    }

}