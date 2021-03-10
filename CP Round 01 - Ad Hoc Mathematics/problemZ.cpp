#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T,i;
    double r1,r2,h,p,r,a,pi;
    pi=acos(-1);
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>r1>>r2>>h>>p;
        r=(r1-r2)/h;
        r=(r*p)+r2;
        a=(pi*p*((r*r)+(r2*r2)+(r*r2)))/3.0;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<a<<endl;
    }
    return 0;
}
