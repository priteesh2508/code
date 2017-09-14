#include <iostream>
using namespace std;

void toh(int n, char from , char to, char aux)
{
    if(n==1){
        cout<<"Move disk 1 from peg "<<from<<" to peg "<<to<<endl;
        return;
    }
    toh(n-1,from,aux,to);
    cout<<"Move disk "<<n<<" from peg "<<from<<" to peg "<<to<<endl;
    toh(n-1,aux,to,from);
}



int main()
{
    int a[10],b[10],c[10],n;
    cin>>n;
    toh(n,'A','B','C');

}
