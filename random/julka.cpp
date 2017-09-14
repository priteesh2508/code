#include<iostream>
#include<string>
using namespace std;

string half(string a)
{
    int i,temp,c=0;
    for(i=0;i<a.length();i++)
    {
        if((a[i]-'0')%2==0)
        {
            temp=(a[i]-'0'+c)/2;
            a[i]=temp+'0';
            c=0;
        }
        else
        {
            temp=(a[i]-'0'+c)/2;
            a[i]=temp+'0';
            c=10;
        }
    }
    return a;
}

string add(string a,string b)
{
    string ans="",anst="";
    char x,y,temp;
    int i=a.length()-1,j=b.length()-1,c=0;
    for(;i>=0 || j>=0;i--,j--)
    {
        if(i>=0)
            x=a[i];
        else
            x='0';
        if(j>=0)
            y=b[j];
        else
            y='0';
        temp=x+y-'0'+c;
        if(temp-'0'>=10)
        {
            temp=temp-10;
            c=1;
        }
        else
            c=0;
        ans=temp+anst;
        anst=ans;
    }
    ans=anst;
    if(c==1)
    {
        anst="1";
        anst=anst+ans;
        return anst;
    }
    return ans;
}

string sub(string a, string b)
{
    string ans="",anst="";
    char x,y,temp;
    int i=a.length()-1,j=b.length()-1,c=0;
    for(;i>=0 || j>=0;i--,j--)
    {
        if(i>=0)
            x=a[i];
        else
            x='0';
        if(j>=0)
            y=b[j];
        else
            y='0';
        temp=x-y-c+'0';
        if(temp-'0'<0)
        {
            temp=temp+10;
            c=1;
        }
        else
            c=0;
        ans=temp+anst;
        anst=ans;
    }
    ans=anst;
    return ans;
}

int main()
{
    int t=0,i;
    string k,n,total,diff;
    int l=10;
    while(l--)
    {
        t=0;
        cin>>total>>diff;
        k=add(total,diff);
        k=half(k);
        n=sub(total,k);
        for(i=0;i<k.length();i++)
        {
            if(k[i]=='0' && t==0)
                continue;
            else if(k[i]!='0' && t==0)
            {
                cout<<k[i];
                t=1;
            }
            else if(t==1)
            {
                cout<<k[i];
            }
        }
        if(t==0)
            cout<<"0";
        cout<<endl;
        t=0;
        for(i=0;i<n.length();i++)
        {
            if(n[i]=='0' && t==0)
                continue;
            else if(n[i]!='0' && t==0)
            {
                cout<<n[i];
                t=1;
            }
            else if(t==1)
            {
                cout<<n[i];
            }
        }
        if(t==0)
            cout<<"0";
            cout<<endl;
    }
}
