#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int l,i,res=0;
    string s;
    char c,p;
    cin>>s;
    l = s.length();

    for(i=l-1;i>=0;i--)
    {
        if(s[i]=='0'){
            l--;
        }
        if(s[i]=='1')
            break;
    }
    p=s[0];
    for(i=1;i<l;i++)
    {
        c=s[i];
        if(p==c)
        {
            l--;
        }
        p=c;
    }
    cout<<l<<endl;
}
