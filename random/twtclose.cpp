#include<iostream>
using namespace std;

int main()
{
    int z,n,k,i,j,a[1000]={0},ct=0;
    cin>>n>>k;
    string x;
    for(i=0;i<k;i++)
    {
        z=0;
        cin>>x;
        if(x[0]=='C' && x[1]=='L' && x[2]=='I' && x[3]=='C' && x[4]=='K')
        {
            cin>>z;
            if(a[z-1]==0){
                a[z-1]=1;
                ct++;
            }
            else{
                a[z-1]=0;
                ct--;
            }
        }
        else if(x[0]=='C' && x[1]=='L' && x[2]=='O' && x[3]=='S' && x[4]=='E')
        {
            ct=0;
            for(j=0;j<n;j++)
            {
                a[j]=0;
            }
        }
        cout<<ct<<endl;
    }
}
