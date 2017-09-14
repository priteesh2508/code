#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string c;
		int v=1,i;
		cin>>c;
		int n=c.length();
		for(i=1;i<n;i++)
        {
            if(c[i]=='C' && c[i-1]!='C')
            {
                v=0;
                break;
            }
            else if(c[i]=='E' && c[i-1]=='S')
            {
                v=0;
                break;
            }

        }
        if(v==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
	}
	return 0;
}
