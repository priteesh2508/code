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
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,q,i,j;
        cin>>n>>q;
        long long int l[n],k[q];
        for(i=0;i<n;i++)
            cin>>l[i];
        quick_sort(l,0,n-1);
        for(i=0;i<q;i++)
        {
            cin>>k[i];
            long long int m=0,c=0,first,last,middle;


            first = 0;
            last = n-1;
            middle = (first+last)/2;
            if(k[i]<=l[0]){
                middle=-1;
            }
            else if(k[i]>=l[n-1])
                middle=n-1;
            else
            {
                while (first <= last)
                {
                    if(l[middle] < k[i])
                    {
                        first = middle + 1;

                    }
                    else if(l[middle] == k[i])
                    {
                        break;
                    }
                    else
                    {
                        last = middle - 1;
                    }
                    middle = (first + last)/2;
                }
            }
            m=n-1-middle;
            for(j=middle;j>c;j--)
            {
                if((k[i]-l[j])<=(j-c))
                {
                    m++;
                    c=c+k[i]-l[j];
                }
            }
            cout<<m<<endl;
        }
    }
}
