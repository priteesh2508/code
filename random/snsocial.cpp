#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,c=0;
        long long int k=0,maxx=0,hr=0,l;
        cin>>n>>m;
        int a[n][m];
        int mx[8][n*m];
        //read and find max
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]>=maxx)
                    maxx=a[i][j];
            }
        }
        //find no and position of max
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){
                if(a[i][j]==maxx)
                {
                    mx[0][k]=i;
                    mx[1][k]=j;
                    mx[2][k]=i;
                    mx[3][k]=j;
                    mx[4][k]=i;
                    mx[5][k]=j;
                    mx[6][k]=i;
                    mx[7][k]=j;
                    k++;

                }
            }
        }
        while(true)
        {
            c=0;
            if(k==m*n)
            {
                hr=0;
                break;
            }
            else
            {

                for(l=0;l<k;l++)
                {
                    if(mx[0][l]!=0)
                        mx[0][l]--;
                    if(mx[1][l]!=0)
                        mx[1][l]--;
                    if(mx[2][l]!=n-1)
                        mx[2][l]++;
                    if(mx[3][l]!=0)
                        mx[3][l]--;
                    if(mx[4][l]!=n-1)
                        mx[4][l]++;
                    if(mx[5][l]!=m-1)
                        mx[5][l]++;
                    if(mx[6][l]!=0)
                        mx[6][l]--;
                    if(mx[7][l]!=m-1)
                        mx[7][l]++;
                    for(j=mx[1][l],i=mx[0][l];i<=mx[2][l];i++)
                    {
                        if(a[i][j]!=maxx)
                        {
                            a[i][j]=maxx;
                            c=1;
                        }
                    }
                    for(j=mx[3][l],i=mx[2][l];j<=mx[5][l];j++)
                    {
                        if(a[i][j]!=maxx)
                        {
                            a[i][j]=maxx;
                            c=1;
                        }
                    }
                    for(j=mx[5][l],i=mx[6][l];i<=mx[4][l];i++)
                    {
                        if(a[i][j]!=maxx)
                        {
                            a[i][j]=maxx;
                            c=1;
                        }
                    }
                    for(j=mx[1][l],i=mx[0][l];j<=mx[7][l];j++)
                    {
                        if(a[i][j]!=maxx)
                        {
                            a[i][j]=maxx;
                            c=1;
                        }
                    }
                }
            }
            if(c==0)
                break;
            else
                hr++;

        }
        cout<<hr<<endl;


    }
}
