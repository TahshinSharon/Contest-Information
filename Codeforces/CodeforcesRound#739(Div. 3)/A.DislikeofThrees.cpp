#include<iostream>
using namespace std;
int main() {
	int t, k, a[1000], j = 1;
	cin >> t;
	for (int i = 1; i <= 1666; i++) {
		if (i % 3 != 0 && i % 10 != 3) {
			a[j] = i;
			j++;
		}
	}
	while (t--) {
		cin >> k;
		cout << a[k] << "\n";
	}
}