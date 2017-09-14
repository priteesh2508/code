#include <iostream>
using namespace std;

int main()
{
    long long int t,k,ans;
    int x;
    cin>>t;
    while(t--)
    {
        cin>>k;
        x=k%4;
        if(x==1)
        {
            ans=192;
        }
        if(x==2)
        {
            ans=442;
        }
        if(x==3)
        {
            ans=692;
        }
        if(x==0)
        {
            ans=942;
        }
        if(x!=0)
            k+=(4-x);
        k/=4;
        k--;
        ans+=(k*1000);
        cout<<ans<<endl;
    }
}
