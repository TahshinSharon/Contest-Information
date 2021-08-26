#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans;
    cin>>n;
    string s;
    for(long long i=0;;i++){
        s=to_string(i)+to_string(i);
        ans=stoll(s);
        if(ans>n){
            cout<<i-1<<endl;
            break;
        }
    }
    return 0;
}