#include <bits/stdc++.h>
using namespace std;
int t1,t2,t3,t4,i,n,k,j,q,a[200002],b[200002];
main(){
	cin>>n>>k>>q;
	for(i=0;i<n;i++){
		cin>>t1>>t2;
		a[t1]++;
		a[t2+1]--;
	}
	for(i=1;i<200002;i++){
		a[i]=a[i]+a[i-1];
		if(a[i]>=k){
			j++;
		}
		b[i]=j;
	}
	while(q--){
		cin>>t3>>t4;
		cout<<b[t4]-b[t3-1]<<endl;
	}
	return 0;
}