#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int u,v,i,j,ans;
        cin>>u>>v;
        j=v+u;
        i=j*(j+1)/2+1 + u;

        cout<<i<<endl;
    }
}
