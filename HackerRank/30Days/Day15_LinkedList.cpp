#include <iostream>
#include <cstddef>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d){
        data=d;
        next=NULL;
    }
};

class Solution
{
public:

    Node *insert(Node *head, int data) {
        //Complete this method
        Node* newNode = new Node(data);
        Node* listTail = head; //parameter to get the tail of the list

        if(!head) //if head is null
            return newNode;
        else
        {
            while(listTail->next) //traverse throught the list till the last element
                listTail = listTail->next;

            listTail->next = newNode; //after the last element, insert the next element to be the newly created node
            return head;
        }
    }

    void display(Node *head)
    {
        Node *start=head;
        while(start)
        {
            cout<<start->data<<" ";
            start=start->next;
        }
    }

};

int main()
{
    Node* head=NULL;
    Solution mylist;
    int T,data;
    cin>>T;
    while(T-- > 0){
        cin>>data;
        head=mylist.insert(head,data);
    }
    mylist.display(head);

}
