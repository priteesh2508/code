#include <iostream>
using namespace std;

int main()
{
    int k,i,x,ans=0;
    float n,t,sum=0.0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    t=sum/n;
    if(t>=k-0.5)
        cout<<ans<<endl;
    else
    {
        for(ans=1;;ans++)
        {
            sum+=k;
            n++;
            t=sum/n;
            if(t>=k-0.5)
            {
                cout<<ans<<endl;
                break;
            }

        }
    }
    return 0;

}
