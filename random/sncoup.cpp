#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r[2]={0},i,j,line=0,c=0,k,l;
        cin>>n;
        char a[2][2*n]={'0'};
        for(j=0;j<2*n;j+=2)
        {
            cin>>a[0][j];
            if(a[0][j]=='*')
                r[0]++;
        }
        for(j=0;j<2*n;j+=2)
        {
            cin>>a[1][j];
            if(a[1][j]=='*')
                r[1]++;
        }
        if(r[0]!=0 && r[1]!=0)//if * in both row line++
            line=1;
        //find where line is possible
        for(i=0;i<2;i++)
        {
            for(j=0;j<2*n;j+=2)
            {

                if(r[i]==1 && a[i][j]=='*')
                    {
                        r[i]--;
                        a[i][j+1]='0';
                    }
                if(r[i]>1 && a[i][j]=='*')
                {
                    r[i]--;
                    a[i][j+1]='b';
                }
                if(a[i][j]=='.')
                {
                    if(j>0)
                        a[i][j+1]=a[i][j-1];
                    else
                        a[i][j+1]='0';
                }

            }
        }

        for(j=1;j<2*n;j+=2)
        {
            if(a[0][j]=='0' && a[1][j]=='b')
            {
                if(a[1][j+1]=='*')
                {
                    line++;
                }
            }
            if(a[0][j]=='b' && a[1][j]=='0')
            {
                if(a[0][j+1]=='*')
                {
                    line++;
                }
            }
            if(a[0][j]=='b' && a[1][j]=='b')
            {
                if(a[0][j+1]=='.' && a[1][j+1]=='*')
                {
                    line++;
                    for(k=j+2;;k+=2)
                    {
                        a[0][k]='0';
                        if(a[0][k+1]=='*')
                            break;
                    }
                }
                if(a[0][j+1]=='*' && a[1][j+1]=='.')
                {
                    line++;
                    for(k=j+2;;k+=2)
                    {
                        a[1][k]='0';
                        if(a[1][k+1]=='*')
                            break;
                    }
                }
                if(a[0][j+1]=='*' && a[1][j+1]=='*')
                {
                    line++;

                }
            }
        }

        cout<<line<<endl;
    }
}
