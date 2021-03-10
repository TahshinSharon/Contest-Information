#include<iostream>
using namespace std;
int main()
{
    int t,a[12],N,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>N;
        for(j=1;j<=N;j++)
        {
            cin>>a[j];
        }
        k=(N/2)+1;
        cout<<"Case "<<i<<": "<<a[k]<<endl;
    }
    return 0;
}
