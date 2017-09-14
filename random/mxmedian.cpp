#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j;
        cin>>n;
        long long int a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=(2*n)-1;i>=n;i--)
        {
            for(j=0;j<=i;j++)
            {
                if(a[j]>a[i])
                {
                    a[j]=a[j]+a[i];
                    a[i]=a[j]-a[i];
                    a[j]=a[j]-a[i];
                }
            }
        }
        cout<<a[(n-1)+((n+1)/2)]<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[n+i]<<" ";
        }
        cout<<""<<endl;
    }
}
