#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, dif, ans, temp;
		cin >> a >> b >> c;
		dif = abs(a - b);
		temp = dif * 2;
		if (a <= temp && b <= temp && c <= temp) {
			if (c + dif > temp) {
				cout << c - dif << "\n";
			} else cout << c + dif << "\n";
		}
		else cout << -1 << endl;
	}
	return 0;
}