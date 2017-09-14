#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int x,a[100001]={0},i,ct=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(a[x]==0){ct++;a[x]=1;}
        }
        cout<<ct<<endl;



    }
}
