#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int s[n],mn=1000000001;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        for(i=1;i<n;i++)
        {
            if(s[i]-s[i-1]<mn)
            {
                mn=s[i]-s[i-1];
            }
        }
        cout<<mn<<endl;

    }
}
