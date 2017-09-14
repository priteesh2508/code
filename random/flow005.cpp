#include <iostream>
using namespace std;

int main()
{
    int t;
    long long int n,res;
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        res=res+n/100;
        n=n%100;
        res=res+n/50;
        n=n%50;
        res=res+n/10;
        n=n%10;
        res=res+n/5;
        n=n%5;
        res=res+n/2;
        n=n%2;
        res=res+n/1;
        n=n%1;
        cout<<res<<endl;
    }
}
