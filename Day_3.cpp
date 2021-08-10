#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *create(int item)
{
    Node * nptr = new Node;
    nptr -> data = item;
    nptr -> next = NULL;

    return nptr;

}

Node *insert_end(Node *head, int item)
{
   Node *newnode = create(item);
   Node *temp;
   newnode->next=0;
   temp=head;
   while(temp->next!=0)
   {
       temp=temp->next;
   }
   temp->next=newnode;
   return head;
}

Node *delete_beg(Node *head){
    Node *temp;
    if(head==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        temp=head;
        head=temp->next;
        delete(temp);

    }
    return head;
}

Node *delete_end(Node *head)
{
    Node *ptr;
    Node *temp=head;
    while(temp->next!=0)
    {
        ptr=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        ptr->next=0;
        delete(temp);
    }
    return head;
}

void display_list(Node *head)
{
    if(!head)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    Node *temp = head;
    cout<<" List elements are: "<<endl;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }

}

int main(){

Node * head = NULL;

    head =create(10);
    display_list(head);

    cout<<endl<<"After inserting at end";
    insert_end(head,20);
    display_list(head);

    cout<<endl<<"After inserting at end";
    insert_end(head,30);
    display_list(head);

    cout<<endl<<"After inserting at end";
    insert_end(head,40);
    display_list(head);

    cout<<endl<<"After inserting at end";
    insert_end(head,50);
    display_list(head);

    cout<<endl<<"After deletion from beginning";
    delete_beg(head);
    display_list(head);

    cout<<endl<<"After deletion from end";
    delete_end(head);
    display_list(head);

    cout<<endl<<"After deletion from end";
    delete_end(head);
    display_list(head);



 return 0;
}
