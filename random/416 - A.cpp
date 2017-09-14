#include <iostream>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    for(long long int i=1;;i++)
    {
        if(i%2!=0)
        {
            a-=i;
        }
        else
        {
            b-=i;
        }
        if(a<0)
        {
            cout<<"Vladik"<<endl;
            break;
        }
        if(b<0)
        {
            cout<<"Valera"<<endl;
            break;
        }
    }
}
