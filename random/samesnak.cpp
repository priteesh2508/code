#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x11,y11,x12,y12,x21,y21,x22,y22,v=1;
        cin>>x11>>y11>>x12>>y12;
        cin>>x21>>y21>>x22>>y22;
        if(x11==x12 && x11==x21 && x11==x22)
        {
            if(y11>=y12)
            {
                if(y21<=y22)
                {
                    if(y11>=y21 && y12<=y22)
                        v=0;
                }
                else
                {
                    if(y11>=y22 && y12<=y21)
                        v=0;
                }
            }
            else
            {
                if(y21<=y22)
                {
                    if(y12>=y21 && y11<=y22)
                        v=0;
                }
                else
                {
                    if(y12>=y22 && y11<=y21)
                        v=0;
                }
            }
        }
        if(y11==y12 && y11==y21 && y11==y22)
        {
            if(x11>=x12)
            {
                if(x21<=x22)
                {
                    if(x11>=x21 && x12<=x22)
                        v=0;
                }
                else
                {
                    if(x11>=x22 && x12<=x21)
                        v=0;
                }
            }
            else
            {
                if(x21<=x22)
                {
                    if(x12>=x21 && x11<=x22)
                        v=0;
                }
                else
                {
                    if(x12>=x22 && x11<=x21)
                        v=0;
                }
            }
        }
        if((x11==x21 && y11==y21) || (x11==x22 && y11==y22) || (x12==x21 && y12==y21) || (x12==x22 && y12==y22))
            v=0;

        if(v==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
