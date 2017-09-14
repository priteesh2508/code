#include <iostream>
#include<vector>
#include<list>
using namespace std;

void display(list<int> a)
{
    list<int>::iterator i=a.begin();
    for(; i!=a.end() ; ++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}



int main()
{
    vector<vector<int> > A;


    int row=A.size(),i,j;
    int col=A[0].size(),r=1,c=1;
    for(i=0;i<row;i++)
    {
        if(A[i][0]==0)
        {
            c=0;
            break;
        }
    }
    for(j=0;j<col;j++)
    {
        if(A[0][j]==0)
        {
            r=0;
            break;
        }
    }
    for(i=1;i<row;i++)
    {
        for(j=1;j<col;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
 for(i=1;i<row;i++)
    {
        if(A[i][0]==0)
        {
            for(j=1;j<col;j++)
            {
                A[i][j]=0;
            }
        }
    }
    for(j=1;j<row;i++)
    {
        if(A[0][j]==0)
        {
            for(i=1;i<row;i++)
            {
                A[i][j]=0;
            }
        }
    }
    if(c==0)
    {
        for(i=0;i<row;i++)
        {
            A[i][0]=0;
        }
    }
    if(r==0)
    {
        for(j=0;j<col;j++)
        {
  A[0][j]=0;
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    /*A.push_back(-3);
    A.push_back(-3);
    A.push_back(142);



    long long int mxvalue=-1, mxstart=0,mxend=-1,tvalue=0,tstart=-1,tend=-1,i,t=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            tvalue+=A[i];
            if(t==0)
            {
                t=1;
                tstart=i;
            }

        }
        else
        {
            if(i!=0)
            {
                if(t==1)
                {
                    t=0;
                    tend=i-1;
                    if(tvalue>mxvalue || (tvalue==mxvalue && tend-tstart >mxend-mxstart))
                    {
                        mxvalue=tvalue;
                        mxstart=tstart;
                        mxend=tend;
                        tstart=-1;
                        tend=-1;
                        tvalue=0;
                    }
                }
            }
        }
    }
    vector<int> ans;
    for(i=mxstart;i<=mxend;i++)
        ans.push_back(A[i]);

    vector<int>::iterator v = ans.begin();
    while(v!=ans.end()){
        cout<<" "<<*v<<endl;
        v++;
    }


   /* int ans=0,i,j,t1,t2;
    cout<<X.size()<<endl;
    if(X.size()==1) ans=0;
    else{
    for(i=1;i<X.size();i++)
    {
        if(X[i-1]>X[i])
        {
            t1=X[i-1]-X[i];
        }
        else
        {
            t1=X[i]-X[i-1];
        }
        if(Y[i-1]>Y[i])
        {
            t2=Y[i-1]-Y[i];
        }
        else
        {
            t2=Y[i]-Y[i-1];
        }
        if(t1>t2)
            ans+=t1;
        else
            ans+=t2;
    }
    }
    cout<<ans<<endl;
    /*vector<int> ret;
    int B=2;
    /*cout<<vec.size()<<endl;
    for(i=0;i<5;i++)
    {
        vec.push_back(i);
    }
    cout<<vec.size()<<endl;*/

/*
    vector<int> A;
    for(int i=0;i<5;i++)
    {
        A.push_back(i);
    }


	if(A.size()==1) {ret.push_back(A[0]); }
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B)%A.size()]);
	}


    vector<int>::iterator v = ret.begin();
    while(v!=ret.end()){
        cout<<" "<<*v<<endl;
        v++;
    }
    /*
    list<int> la,lb;
    la.push_back(100);
    la.push_back(4);
    la.push_back(35);
    lb.push_back(2);
    lb.push_back(500);
    display(la);
    la.sort();
    lb.sort();
    la.merge(lb);
    display(la);*/
}
