#include <iostream>
using namespace std;

int main()
{
    int r;
    cin>>r;
    while(r--)
    {
        char x;
        int l,i,v=1,h=0,t=0;
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>x;
            if(x=='.')
                continue;
            else if(x=='H')
                h++;
            else if(x=='T')
                t++;
            if(t>h)
                v=0;
            if(h-t>1)
                v=0;
        }
        if(h!=t)
            v=0;
        if(v==0)
            cout<<"invalid"<<endl;
        else
            cout<<"valid"<<endl;
    }
}
