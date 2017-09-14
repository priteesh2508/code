#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        for(i=1;i<2*n;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
