#include <iostream>
using namespace std;

int main()
{
    long long int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i%4==0)
            cout<<'a';
        if(i%4==1)
            cout<<'a';
        if(i%4==2)
            cout<<'b';
        if(i%4==3)
        cout<<'b';
    }
    cout<<endl;
}
