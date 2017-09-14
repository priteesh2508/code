#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int i,x[1001]={0},c[1001],a[1001],top=0,topc=0,topa=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>x[i];
        }
        sort(x,x+m);
        for(i=1;i<=n;i++)
        {
            while(i==x[top] && i!=n)
            {
                i++;
                top++;
            }
            if(i!=x[top])
            {
                c[topc]=i;
                topc++;
            }
            i++;
            if(i<=n)
            {
                while(i==x[top] & i!=n)
                {
                    i++;
                    top++;
                }
                if(i!=x[top])
                {
                    a[topa]=i;
                    topa++;
                }
            }

        }
        for(i=0;i<topc;i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<topa;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;


    }
}
