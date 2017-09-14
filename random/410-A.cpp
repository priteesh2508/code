#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s;
    int i,k,ans=0,j=0;
    cin>>s;
    for(i=0,k=s.length()-1;i<=k;i++,k--)
    {

        if(s[i]!=s[k] && ans==0)
        {
            ans=1;
        }
        else if(s[i]!=s[k] && ans==1)
        {
            j=1;
            break;
        }
    }
    if(ans==1 && j==1)
    {
        cout<<"NO"<<endl;
    }
    else if(s.length()%2==1 && ans==0)
    {
        cout<<"YES"<<endl;
    }
    else if(ans==0)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
