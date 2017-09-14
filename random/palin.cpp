#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int t,l,i,j,tgl;

    string s;
    cin>>t;
    while(t--)
    {
        tgl=0;
        cin>>s;
        l=s.length();
        for(i=0;i<l/2.0;i++)
        {
            if(s[i]==s[l-i-1])
            {
                continue;
            }
            if(s[i]!=s[l-i-1])
            {
                if(s[i]>s[l-i-1])tgl=1;
                else tgl=0;
                s[l-i-1]=s[i];
            }
        }
        if(tgl==0)
        {
            if(l==1)
                if(s[0]!='9')s[0]++;
                else s="11";
            else
            {
                if(l%2==0)
                {
                    if(s[l/2]!='9' && s[l/2-1]!='9'){
                        s[l/2]++;
                        s[l/2-1]++;
                    }
                    else
                    {
                        for(i=l/2-1,j=l/2;i>=0;i--,j++)
                        {
                            if(s[i]!='9' && s[j]!='9')
                            {
                                s[i]++;
                                s[j]++;
                                s[l/2]='0';
                                s[l/2-1]='0';
                                tgl=1;
                                break;
                            }
                        }
                        if(tgl==0)
                        {
                            s="1";
                            for(i=1;i<l;i++)
                            {
                                s=s+"0";
                            }
                            s=s+"1";
                        }
                    }
                }
                else
                {
                    if(s[l/2]!='9')
                        s[l/2]++;
                    else
                    {
                        for(i=l/2,j=l/2;i>=0;i--,j++)
                        {
                            if(s[i]!='9' && s[j]!='9')
                            {
                                s[i]++;
                                s[j]++;
                                s[l/2]='0';
                                tgl=1;
                                break;
                            }
                        }
                        if(tgl==0)
                        {
                            s="1";
                            for(i=1;i<l;i++)
                            {
                                s=s+"0";
                            }
                            s=s+"1";
                        }

                    }
                }
            }
        }
        cout<<s<<endl;
    }
}
