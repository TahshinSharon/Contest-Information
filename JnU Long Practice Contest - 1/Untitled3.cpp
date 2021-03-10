#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,tot,c;
    priority_queue<int,vector<int>,greater<int> > pq;
    while(1){
        cin>>n;
        if(n==0) return 0;
        tot=0;
        c=0;
        while(n--){
            cin>>a;
            pq.push(a);
        }
        while(pq.size()!=1){
            tot=pq.top();
            pq.pop();
            tot+=pq.top();
            pq.pop();
            c+=tot;
            pq.push(tot);
        }
        cout<<c<<endl;
        pq.pop();
    }
    return 0;
}
