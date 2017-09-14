#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x,y=1,y1=0,ymax,res1,res2,res=0,weight=0;
        cin>>n;
        int toggle=1;
        ymax= (n+1)/2;
        if(n%2!=0)
        {
           for(i=0;i<n;i++)
           {

               cin>>x;
               weight+=x;
               if(x>y)
               {
                    res= res+x-y;
                    y1=y;
                    if(y>=ymax)
                        toggle=0;
                    if(toggle==1)
                        y++;
                    else
                        y--;

               }
               else if(x<y)
               {
                    if(i+y1-1>=(n-1-y1-1))
                    {
                        ymax=y1;
                        y=y1-1;
                        res= res+x-y;
                        y1=y;
                        if(y>1)
                            y--;
                        else
                            y==0;

                    }
               }
               else
               {
                    weight+=x;
                   y1=y;
                   if(y>=ymax)
                    toggle=0;
                   if(toggle==1)
                    y++;
                   else
                    y--;
               }
           }
        }
        cout<<res<<endl;
    }
}
