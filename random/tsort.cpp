#include <iostream>
using namespace std;

int partition(long long int a[],long long int l,long long int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}

void quick_sort(long long int a[],long long int l,long long int u)
{
    int f;
    if(l<u)
    {
        f=partition(a,l,u);
        quick_sort(a,l,f-1);
        quick_sort(a,f+1,u);
    }
}


int main()
{
    long long int t,i;
    cin>>t;
    long long int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,0,t-1);
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }

}
