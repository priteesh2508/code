#include<iostream>
using namespace std;

int main()
{

    long long int a,t,sum=0,x,n;
    cin>>t;
    while(t--){
        cin>>n;
        a=n;
        sum=0;
        while(n--)
        {
            cin>>x;
            sum=(sum+x)%a;
        }
        if(sum==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
