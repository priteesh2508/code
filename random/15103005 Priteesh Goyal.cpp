#include<iostream>
using namespace std;

int main()
{
    struct contact{
        string name;
        string num;
        contact* next;
    };
    struct contact *head[26]={0};
    int x=1,n;
    while(x){
    cout<<endl;
    cout<<"1. Add a contact\n2. Find a contact\n3. Delete a contact\n4. Display directory"<<endl;
    cin>>x;
    switch(x)
    {
    case 1:
        {
            int fl=0;
            //take input
            struct contact *t,*temp = new contact;
            temp->next=0;
            cout<<"Enter name: ";
            cin>>temp->name;
            while(temp->name[0]<65 || (temp->name[0]>90 && temp->name[0]<97) || temp->name[0]>122)
            {
                cout<<"Enter a valid name : ";
                cin>>temp->name;
            }
            lp: cout<<"Enter number: ";
            cin>>temp->num;
            for(int i=0;i<temp->num.length();i++)
            {
                //cin>>temp->num[i];
                if(temp->num[i]>57 || temp->num[i]<48)
                    goto lp;
            }


            //find alphabet no.

            if(temp->name[0]>=97)
            {
                n=temp->name[0]-97;
            }
            if(temp->name[0]<=90)
            {
                n=temp->name[0]-65;
            }
            t=head[n];
            while(t!=0)
            {
                if(temp->name==t->name)
                    fl=1;
                t=t->next;
            }
            //cout<<temp->name<<temp->num<<n;
            //insert in ll
            //cout<<head[n]<<endl;
            if(fl!=1){
                if(head[n]!=0){
                    for(t=head[n];;t=t->next)
                    {
                    //cout<<"hre"<<endl;
                        if(t->next==0)
                            break;
                    }
                    t->next=temp;
                //cout<<t->next->name;
                }
                else{
                    //cout<<"0"<<endl;

                    head[n]=temp;
                //cout<<head[n]->next->name;

                }

            //cout<<t->next->name;
                cout<<"Contact Added!"<<endl;
            }
            else
                cout<<"Contact exists"<<endl;
            break;
        }
    case 2:
        {
            int fl=0;
            string a;
            cout<<"Enter Name"<<endl;
            cin>>a;
            while(a[0]<65 || (a[0]>90 && a[0]<97) || a[0]>122)
            {
                cout<<"Enter a valid name : ";
                cin>>a;
            }
            if(a[0]>=97)
            {
                n=a[0]-97;
            }
            if(a[0]<=90)
            {
                n=a[0]-65;
            }
            for(contact *temp=head[n];temp!=NULL;temp=temp->next)
            {
                if(temp->name==a)
                {
                    cout<<"Name: "<<temp->name<<"\nNumber: "<<temp->num<<endl;
                    fl=1;
                    break;
                }
            }
            if(fl==0)
                cout<<"Not Found"<<endl;
            break;
        }
    case 3:
        {
            int fl=0;
            string a;
            contact *temp,*prev=0;
            cout<<"Enter Name"<<endl;
            cin>>a;
            while(a[0]<65 || (a[0]>90 && a[0]<97) || a[0]>122)
            {
                cout<<"Enter a valid name : ";
                cin>>a;
            }
            if(a[0]>=97)
            {
                n=a[0]-97;
            }
            if(a[0]<=90)
            {
                n=a[0]-65;
            }
            for(temp=head[n];temp!=NULL;temp=temp->next)
            {
                if(temp->name==a)
                {
                    if(prev==0)
                    {
                        head[n]=0;
                    }
                    else
                    {
                        prev->next=temp->next;
                    }
                    fl=1;
                    cout<<"Deleted"<<endl;
                }
                prev=temp;
            }
            if(fl=0)
                cout<<"Not Found"<<endl;
            break;
        }
    case 4:
        {
            contact* temp;
            for(int i=0;i<26;i++)
            {
                temp=head[i];
                //cout<<i<<endl;
                if(head[i]!=NULL)
                {

                    while(temp!=NULL)
                    {

                        cout<<"Name: "<<temp->name<<endl;
                        cout<<"Number: "<<temp->num<<endl;
                        cout<<endl;
                        temp=temp->next;
                    }
                }
            }
        }
    }
    }


}
