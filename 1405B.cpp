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

	vector<long long> p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i];

	if (n == 1) {
		cout << 0 << endl;
		return;
	}

	int i = 0;
	long long temp;
	while(i < n) {
		if (p[i] <= 0) {
			p[i] = 0;	i++;	continue;
		}
		else {
			temp = 0;
			while (i < n && p[i] >= 0) {
				temp += p[i];
				p[i] = 0;
				i++;
			}

			while (i < n && temp > 0) {
				if (p[i] < 0) {
					if (temp + p[i] >= 0) {
						temp += p[i];
						p[i] = 0;
					}
					else {
						p[i] += temp;
						temp = 0;
						break;
					}
				}
				else {
					temp += p[i];
					p[i] = 0;
				}
				i++;
			}
		}
	}
	cout << temp << endl;
}

int main()
{
#ifdef _DEBUG
	freopen("1405B.txt", "r", stdin);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
