#include<iostream>
#include<algorithm>
using namespace std;
int l[200001],r[200001],n;
int main()
{

cin>>n;
for(int i=1;i<=n;i++)
{cin>>l[i]>>r[i];}
sort(l+1,l+n+1);
sort(r+1,r+n+1);
for(int i=1;i<n-1;i++)
{
if(r[i]>=l[i+2])
{cout<<"NO"<<endl;return 0;}
}
cout<<"YES"<<endl;}
