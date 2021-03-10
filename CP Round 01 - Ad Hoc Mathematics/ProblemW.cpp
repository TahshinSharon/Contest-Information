#include<bits/stdc++.h>
using namespace std;
long long H(int n){
long long res = 0;
for( int i =0;i<n;i++ ){
res = (res + n/(i+1));
}
return res;
}
int main()
{
    long long T,n,i,j;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        cout<<H(n)<<endl;
    }
    return 0;
}
