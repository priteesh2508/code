#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s1=999999999,s2=999999999,g1=0,g2=0,x,sum=0,sum1=0,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum1+=x;
            if(x<s1)
            {
                s2=s1;
                s1=x;
            }
            else if (x<s2)
            {
                s2=x;
            }
            if(x>g2)
            {
                g1=g2;
                g2=x;
            }
            else if (x>g1)
            {
                g1=x;
            }
        }
        if(s2-s1!=1)
            cout<<s1<<endl;
        else if(g2-g1!=1)
            cout<<g2<<endl;
        else
        {
            sum = (g2*(g2+1)/2) - (s1*(s1-1)/2);
            cout<<sum1-sum<<endl;
        }
    }
}
