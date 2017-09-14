#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=0,mn=0;;
    if(a>=b && a>=c)
    {
        mx=a;
        mn=b+c;
    }
    else if(b>=a && b>=c)
    {
        mx=b;
        mn=a+c;
    }
    else
    {
        mx=c;
        mn=a+b;
    }
    if(a<=0 || b<=0 || c<=0)
        cout<<"NOT TRIANGLE"<<endl;
    else if(mn>mx){
        if(a==b && a==c)
            cout<<"Equilateral triangle"<<endl;
        else if(a==b || b==c || a==c)
            cout<<"Isosceles triangle"<<endl;
        else
            cout<<"Scalene triangle"<<endl;
    }
    else
        cout<<"NOT TRIANGLE"<<endl;
}
