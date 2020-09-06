#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <bits/stdc++.h>

using namespace std;

void solve();

void solve()
{
	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i];

	if (n % 2 == 0) {
		int j = n - 1;
		for (int i = 0; i < n / 2; i++) {
			swap(p[i], p[j]);
			j--;
		}
	}
	else {
		int j = n - 1;
		for (int i = 0; i < n / 2 ; i++) {
			swap(p[i], p[j]);
			j--;
		}
	}

	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
	cout << endl;

}

int main()
{
#ifdef _DEBUG
	freopen("1405A.txt", "r", stdin);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
