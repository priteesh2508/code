#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,ans=1;
        long long int b;
        cin>>a>>b;
        a=a%10;
        if(b!=0)
        {
            if(b%4==0)
                b=4;
            else
                b=b%4;

            for(int i=1;i<=b;i++)
            {
                ans=ans*a;
            }
        }
        else
            ans=1;
        cout<<ans%10<<endl;
    }
}
