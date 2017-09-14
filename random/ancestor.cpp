#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x,y,j;
        cin>>n;
        long long int ans[n][n]={0};
        ans[0][n-1]=0;
        for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;
            if(x>y)
            {
                ans[x-2][y-1]=1;
                for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
                cout<<x-1<<endl;
                ans[x-2][n-1]= ans[y-1][n-1]+1;

                for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
            }
            else
            {
                ans[y-2][x-1]=1;//error here
                for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
                cout<<y-1<<endl;
                ans[y-1][n-1]= ans[x-1][n-1]+1;
                for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
            }
        }
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;

            if(x>y)
            {
                if(ans[x-1][y-2]!=1){
                    ans[x-1][n-1]--;
                    cout<<ans[x-1][n-1]<<endl;
                    for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }
        }
            }
            else
            {
                if(ans[y-1][x-2]!=1){
                    ans[y-1][n-1]--;
                    cout<<ans[x-1][n-1]<<endl;
                    for(j=0;j<n;j++)
        {
            cout<<ans[j][n-1]<<" ";
        }}
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i][n-1]<<" ";
        }
        cout<<endl;
    }
}
