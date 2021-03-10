#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long a[n][n],i,j,ans;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++){
    cin>>a[i][j];
    }
    }
	ans=sqrt((a[0][1]*a[0][2])/a[1][2]);
	cout<<ans<<" ";
    for(i=1;i<n;i++){
    cout<<(a[0][i]/ans)<<" ";
    }
	return 0;
}
