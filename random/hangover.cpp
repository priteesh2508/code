#include<iostream>
using namespace std;

int main()
{
    int i;
    float total=0.00;
    float a=1.1;
    cin>>a;
    while(a!=0.00)
    {
        total=0.00;
        for(i=2;total<a;i++)
        {
            total+=1.00/i;
        }
        cout<<i-2<<" card(s)"<<endl;
        cin>>a;
    }
}
