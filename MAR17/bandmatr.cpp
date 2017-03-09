#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,j;
        long long int ct=0,ct1=0,m=0,ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>x;
                if(x==0)
                    ct++;

            }
        }
        cout<<ct<<endl;
                ct1=0;
                m=0;
                for(i=n-1;i>=-1;i--)
                {
                    if(ct1<=ct)
                    {
                        ans=i;
                        m+=2;
                        ct1+=m;
                    }
                    else if(ct1>ct)
                        break;
                    else
                    {
                        m+=2;
                        ct1+=m;
                    }
                }
                cout<<ans<<endl;
    }
}
