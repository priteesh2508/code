#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int s=0,m=0;
        int i,n = a.length();
        if(a[0]=='s')
            s++;
        else
            m++;
        for(i=1;i<n;i++)
        {
            if(a[i-1]=='s' && a[i]=='m')
            {
                if(s!=0)
                    s--;
                m++;
                a[i]='0';
            }
            if(a[i-1]=='s' && a[i]=='s')
            {
                s++;
            }
            if(a[i-1]=='m' && a[i]=='m')
            {
                m++;
            }
            if(a[i-1]=='m' && a[i]=='s')
            {
                a[i]='0';
            }
            if(a[i-1]=='0' && a[i]=='m')
            {
                m++;
            }
            if(a[i-1]=='0' && a[i]=='s')
            {
                s++;
            }
        }
        if(s>m)
            cout<<"snakes"<<endl;
        if(m>s)
            cout<<"mongooses"<<endl;
        if(m==s)
            cout<<"tie"<<endl;
    }
}
