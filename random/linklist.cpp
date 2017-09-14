#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    int n,x;
    struct node *head, *temp;
    temp = new(struct node);
    head=NULL;
    while(n!=0){
    cout<<"SELECT OPTION\n1. Insert\n2. Delete"<<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"SELECT OPTION\n1. Beginning\n2. End\n3. Middle"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"Enter no.: ";
            cin>>x;
            temp = new(struct node);
            temp->data=x;
            temp->next=head;
            head=temp;
            display(head);
        }
        if(n==2)
        {

        }
        if(n==3)
        {

        }
    }
    if(n==2)
    {
        cout<<"SELECT OPTION\n1. Beginning\n2. End\n3. Middle"<<endl;
        cin>>n;
        if(n==1)
        {

        }
        if(n==2)
        {

        }
        if(n==3)
        {

        }
    }


    }

}
