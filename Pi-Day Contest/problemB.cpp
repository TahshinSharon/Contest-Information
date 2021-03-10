#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long LL;
LL data[100010],n,m;
int main(){
    while(scanf("%I64d %I64d",&n,&m)!=EOF){
        LL l=0,r=0;
        for(int i=0;i<n;++i){
            scanf("%I64d",&data[i]);
            r+=data[i];
            l=max((LL)data[i],l);
        }
        while(l<=r){
            LL mid=(l+r)/2,count=1,cur=0;
            for(int i=0;i<n;++i){
                if(cur+data[i]<=mid)
                    cur+=data[i];
                else{
                    cur=data[i];
                    ++count;
                }
            }
            if(count>m)
                l=mid+1;
            else
                r=mid-1;
        }
        printf("%I64d\n",l);
    }
    return 0;
}
