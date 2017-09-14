#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


	    string s;
	    cin>>s;
	    int i,a[2000],top=-1;
	    for(i=0;i<s.length();i++)
	    {
	       if(s[i]=='.'){
                top++;
	            a[top]=i;
	        }
	    }
	    string ans;
	    if(top>=0){
            for(i=a[top]+1;i<s.length();i++)
            {
            ans+=s[i];
            }
            top--;
            for(;top>=0;top--)
            {
                ans+='.';
                for(i=a[top]+1;i<a[top+1];i++)
                {
                    ans+=s[i];
                }

            }
            ans+='.';
            for(i=0;i<a[0];i++)
            {
                ans+=s[i];
            }
            cout<<ans<<endl;
	    }
	    else
            cout<<s<<endl;
    }
   return 0;
}
