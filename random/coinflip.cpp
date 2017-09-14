#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int g,n;
        int i,q;
        cin>>g;
        while(g--)
        {
            cin>>i>>n>>q;
            if(n%2==0)
            {
                cout<<n/2<<endl;
            }
            else
            {
                if(i==q)
                    cout<<n/2<<endl;
                else
                    cout<<n/2+1<<endl;
            }
        }
    }
}
