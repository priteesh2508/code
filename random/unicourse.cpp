#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,mx=0,x;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>mx)
                mx=x;
        }
        cout<<n-mx<<endl;
    }
    return 0;
}

