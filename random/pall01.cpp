#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int l,i,j,v=1;
        l=n.length();
        for(i=0,j=l-1;i<=j;i++,j--)
        {
            if(n[i]!=n[j]){
                v=0;
                break;
            }
        }
        if(v==1)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;

    }

}
