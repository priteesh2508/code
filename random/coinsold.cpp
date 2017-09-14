#include <iostream>

using namespace std;

long int fin(long int n)
{
    cout<<n<<" "<<m[n]<<endl;
    long int by2,by3,by4;
    if(n>11)
    {
        by2 = fin(n/2);
        by3 = fin(n/3);
        by4 = fin(n/4);
    }
    else
        return n;

    if((by2+by3+by4)>n)
        return by2+by3+by4;
    else
        return n;
}

int main()
{
    int t=1;
    long int n;
    while(cin>>n)
    {
        n=fin(n);
        cout<<n<<endl;
        t++;
        if(t==10)
            break;
    }
}
