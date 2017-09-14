#include<iostream>
using namespace std;

int main()
{
    int i,n,q,a,b,x,ct;
    cin>>n>>q;
    int p[n]={0};
    while(q--)
    {
        ct=0;
        cin>>x>>a>>b;
        if(x==0)
        {
            for(i=a;i<=b;i++)
            {
                if(p[i]==0)
                    p[i]=1;
                else
                    p[i]=0;
            }
        }
        else if(x==1)
        {
            for(i=a;i<=b;i++)
            {
                if(p[i]==1)
                    ct++;
            }
            cout<<ct<<endl;
        }
    }
}
