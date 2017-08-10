/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node* start = head;
    Node* temp = head;

    //if(head == NULL)
    //  return false;


    while(temp!=NULL && temp->next!=NULL)
    {
        start = start->next;
        temp = temp->next->next;

        if(start == temp)
            return true;



    }
    return false;

}

//Implementation of Floyd's cycle finding algorithm