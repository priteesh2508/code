#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int t,n,r,i,j,k;
    long long int ans;
    cin>>t;
    while(t--)
    {
        ans=1.0;
        cin>>n>>k;
        n=n-1;
        k=k-1;
        r=n-k;
        if(r>n/2)
            r=n-r;
        for(i=1;i<=r;i++)
        {
            ans*=n-r+i;
            ans/=i;
        }
        cout<<ans<<endl;
    }
}
