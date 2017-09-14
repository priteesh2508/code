#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m,i ,x,y;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
           cin>>x>>y;
        }
        if(n%2==0)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
}
