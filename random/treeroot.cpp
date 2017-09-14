#include<iostream>
using namespace std;

int main()
{
    int n,t,v,s,sumv,sums;
    cin>>t;
    while(t--)
    {
        sumv=0;
        sums=0;
        cin>>n;
        while(n--)
        {
            cin>>v>>s;
            sumv+=v;
            sums+=s;
        }
        cout<<sumv-sums<<endl;


    }
}
