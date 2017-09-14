#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0;
        int i,j,a[n],prev=0,y[8]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0,j=n-1;;i++,j--)
        {
            //cout<<a[i]<<a[j]<<endl;
            if(a[i]==7 && a[j]==7)
                break;
            if(a[i]==a[j] && (a[i]==prev+1 || a[i]==prev))
                {
                    prev=a[i];
                }
            else{
                   // cout<<i<<j<<a[i]<<a[j]<<endl;
                x=1;
                break;
            }

        }
        cout<<prev<<endl;
        if(x==0 && a[0]==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}
