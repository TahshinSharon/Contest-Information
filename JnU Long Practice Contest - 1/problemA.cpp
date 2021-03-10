#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,set[5000],cost[5000],sum;
    while(cin>>n,n)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>set[i];
        }
        for(int j=0;j<n-1;j++)
        {
            if(j==0)
            {
                cost[j]=set[j]+set[j+1];
                sum=sum+cost[j];
            }
            else
            {
                cost[j]=cost[j-1]+set[j+1];
                sum=sum+cost[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
