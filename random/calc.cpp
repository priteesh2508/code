#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,b,x,y,mx=0;
        cin>>n>>b;
        x=n%b;
        y=(n-x)/b;
        if(b>=n)
            mx=0;
        else if(n<2*b)
        {
            mx=x;
        }
        else
        {
            if(y%2==0)
            {
                y=y/2;
                x=n-(y*b);
                mx=x*y;
            }
            else
            {
                y=y/2;
                x=n-(y*b);
                mx=x*y;
                y++;
                x=n-(y*b);
                if(mx<y*x)
                    mx=y*x;
            }
        }
        cout<<mx<<endl;
    }
}
