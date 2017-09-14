#include<iostream>
#include<string>
using namespace std;

char getcap(char a)
{
    if(a<=90)
        return a;
    a-=32;
    return a;
}
char getsmall(char a)
{
    if(a>=97)
        return a;
    a+=32;
    return a;
}

int main()
{
    int x=0;
    string a,t;
    getline(cin,t);
    for(int k=1,j=t.length()-1;j>=0;k=k*10,j--)
    {
        x+=((t[j]-48)*k);
    }
    while(x--)
    {
        string ans="";
        int i,i1=-1,i2=-1,i3=-1,tg=1;
        getline(cin,a);
        for(i=0;i<a.length();i++)
        {
            if(tg==1)
            {
                if(i1==-1)
                    i1=i;
                else if(i2==-1)
                    i2=i;
                else if(i3==-1)
                    i3=i;
                tg=0;
            }

            if(a[i]==32)
                tg=1;
            if(a[i]=='\n')
                break;
        }
        if(i3!=-1)
        {
            ans+=getcap(a[i1]);
            ans=ans+". ";
            ans+=getcap(a[i2]);
            ans=ans+". ";
            ans+=getcap(a[i3]);
            for(i=i3+1;i<a.length();i++)
            {
                ans=ans+getsmall(a[i]);
            }
        }
        else if(i2!=-1)
        {
            ans+=getcap(a[i1]);
            ans=ans+". ";
            ans+=getcap(a[i2]);
            for(i=i2+1;i<a.length();i++)
            {
                ans=ans+getsmall(a[i]);
            }
        }
        else
        {
            ans+=getcap(a[i1]);
            for(i=i1+1;i<a.length();i++)
            {
                ans=ans+getsmall(a[i]);
            }
        }

        cout<<ans<<endl;
    }

}
