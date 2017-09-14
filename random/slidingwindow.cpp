#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int temp=1,k, n,x=0;
        cin>>n;
        int i, a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        int lind=0,rind=0;
        while(lind<n && rind<n)
        {
            if(temp*a[rind]<k)
            {
                //cout<<a[rind];
                temp*=a[rind];
                rind++;
                x+=rind-lind;
               // cout<<" "<<x<<" "<<rind<<" "<<lind<<endl;

            }
            else
            {
                if(lind!=rind)
                    lind=rind;
                else
                {
                    lind++;
                    rind++;
                }

            }

        }
        cout<<x<<endl;
    }
}
