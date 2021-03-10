#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 1001;
int t[maxn];
void upd(int pos, int val){
    for(;pos < maxn; pos |= pos + 1)
    t[pos] += val;
}
int get(int r){
    int res = 0;
    for(; r >= 0; r = (r & (r + 1)) - 1)
    res += t[r];
    return res;
}
int get(int l, int r){
    if(l > 0)
    return get(r) - get(l - 1);
    else
    return get(r) - 0;
}
int n, a[maxn], ans, k;
main (){
	cin >> n >> k;
	k = min(k, n / 2);
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	int pos = 1;
	for(int i = n; i >= 1; i--){
			if(k >= 1){
			swap(a[pos++], a[i]);
			k--;
		}
	}
	for(int i = 1; i <= n; i++){
   		  ans += get(a[i] + 1, maxn - 1);
  		  upd(a[i], 1);
    }
    cout << ans;
}
