#include<iostream>
using namespace std;
#define max 100005
#define ll long long
ll ar[max],prefix[max];
int n,q,l,r;
void solve()
{
    int sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&ar[i]);
    for(int j=1;j<=n;j++)prefix[j]=prefix[j-1]+ar[j];
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&l,&r);
        l=l+1;
        r=r+1;
        sum=prefix[r]-prefix[l-1];
        printf("%d\n",sum);
    }
}
int main()
{
    solve();
    return 0;
}