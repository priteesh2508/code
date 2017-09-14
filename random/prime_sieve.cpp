#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,j,c=0;
    int a[(int)sqrt(1e9)+1]={0};

    int n,m;

    for(i=2;i<=sqrt(sqrt(1e9));i++)
    {
        if(a[i]==0)
        {
            for(j=i+i;j<=sqrt(1e9);j+=i)
            {
                a[j]=1;
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int sol[m-n+2]={0};
        for(i=2;i<=sqrt(m);i++)
        {
            if(a[i]==0)
            {
                for(j=0;j<=m-n+1;j+=i)
                {
                    if((n+j)%i==0 && (n+j)!=i)
                    {
                        sol[j]=1;
                    }
                    else
                    {
                        j=j+i-((n+j)%i);
                        if((n+j)!=i)
                        sol[j]=1;
                    }
                }
            }
        }
        if(n==1)
            sol[0]=1;
        for(i=0;i<m-n+1;i++)
        {
            if(sol[i]==0)
                cout<<n+i<<endl;
        }
    }

}
