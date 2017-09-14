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
        long long int x,n,i,tempc=0,tempv=0,res=0;
        cin>>n;
        long long int a[n],top=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>=0)
            {
                tempc++;
                tempv+=x;
            }
            else
            {
                a[top]=x;
                top++;
            }
        }
        quick_sort(a,0,top-1);
       /* for(i=top-1;i>=0;i--)
            cout<<a[i]<<" ";
        cout<<endl;*/
        for(i=top-1;i>=0;i--)
        {
             if(tempc!=0)
            {
                if(((tempv+a[i])*(tempc+1))>=(tempv*tempc+a[i]))
                {
                    tempv+=a[i];
                    tempc++;
                }
                else
                {
                    res+=(tempv*tempc) + a[i];
                    tempv=0;
                    tempc=0;
                    break;
                }

            }
            else
            {
                res+=a[i];
                break;
            }
        }
        for(--i;i>=0;i--)
            {
                res+=a[i];
            }
        res+=(tempv*tempc);
        cout<<res<<endl;
    }
}
