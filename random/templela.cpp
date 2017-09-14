#include <iostream>
using namespace std;

int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        int n,i,e=1,x,v=1;
        cin>>n;
        if(n%2==0)
            v=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x!=e)
                v=0;
            if(i<(n-1)/2)
                e++;
            else
                e--;
        }
        if(v==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}
