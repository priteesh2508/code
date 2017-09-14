#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x=0,mx=0,mn=0;
        string a;
        cin>>a;
        for(long long int i=0;i<a.length();i++)
        {
            if(a[i]=='>')
            {
                x--;
            }
            else if (a[i]=='<')
            {
                x++;
            }
            if(x>mx)
                mx=x;
            if(x<mn)
                mn=x;
        }
        cout<<mx+(1-mn)<<endl;
    }
    return 0;
}
