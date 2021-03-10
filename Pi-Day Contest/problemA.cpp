#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n, pos,eqpos;
	cin >> n >> pos;
	if (n % 2 == 0) {
		eqpos = n / 2;
	}
	else {
		eqpos = (n / 2)+1;
	}
	if (pos <= eqpos) {
		cout << pos * 2 - 1;
	}
	else {
		cout << (pos-eqpos) * 2;
	}


}
