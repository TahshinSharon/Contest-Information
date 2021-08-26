#include<iostream>
#include<algorithm>
using namespace std;
int countDistinct(int arr[], int n)
{
	sort(arr, arr + n);
	int res = 0;
	for (int i = 0; i < n; i++) {

		while (i < n - 1 && arr[i] == arr[i + 1])
			i++;

		res++;
	}

	return res;
}
int main() {
	int T, n, ans;
	cin >> T;
	while (T--) {
		int a[4], count = 0;
		for (int i = 0; i < 4; i++) {
			cin >> a[i];
		}
		n = countDistinct(a, 4);
		if (n % 2 != 0) {
			ans = (n + 1) / 2;
		}
		else ans = n / 2;
		cout << ans << "\n";
	}
	return 0;
}