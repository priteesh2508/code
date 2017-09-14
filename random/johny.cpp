#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans,k,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        k--;
        ans=k;
        for(i=0;i<k;i++)
        {
            if(a[i]>a[k])
                ans--;
        }
        for(i=k+1;i<n;i++)
        {
            if(a[i]<a[k])
                ans++;
        }
        ans++;
        cout<<ans<<endl;
    }
}
