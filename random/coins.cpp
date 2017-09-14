#include <iostream>
using namespace std;

long long int m[100000]={0};

long long int fin(long long int n)
{

    long long int by2,by3,by4;
    if(n<100000 && m[n]!=0)
    {
        return m[n];
    }
    else
    {

        if(n>11){
            by2 = fin(n/2);
            by3 = fin(n/3);
            by4 = fin(n/4);
        }
        else
        {
            return n;
        }

        if((by2+by3+by4)>n)
        {
            return by2+by3+by4;
        }
        else
        {
            return n;
        }
    }

}

int main()
{
    int t=0;
    long long int a,n;
    for(int i=0;i<100000;i++)
    {
        m[i]=fin(i);
    }
    while(cin>>n)
    {
        a=fin(n);
        cout<<a<<endl;
        t++;
        if(t==10)
            break;
    }
}
