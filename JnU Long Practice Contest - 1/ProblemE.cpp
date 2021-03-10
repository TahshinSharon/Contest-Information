#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,avg,h[50],sum,ans,count=1;
    while(cin>>n,n)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>h[j];
            sum+=h[j];
        }
        avg=sum/n;
        ans=0;
        for(int k=0;k<n;k++)
        {
            if(h[k]>avg)
            {
                ans+=h[k]-avg;
            }
        }
        cout<<"Set #"<<count++<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
    }
    return 0;
}
