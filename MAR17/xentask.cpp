#include <iostream>
using namespace std;
//Completed
//https://www.codechef.com/MARCH17/problems/XENTASK

int main()
{
    int t;
    long long int n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int t1=0,t2=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i%2==0)
                t1+=x;
            else
                t2+=x;
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i%2==0)
                t2+=x;
            else
                t1+=x;
        }
        if(t1>t2)
            cout<<t2<<endl;
        else
            cout<<t1<<endl;
    }
}
