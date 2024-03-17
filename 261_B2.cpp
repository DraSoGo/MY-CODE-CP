#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
typedef set<string> ss;
typedef vector<int> vs;
typedef map<int, char> msi;
typedef pair<int, int> pa;
typedef long long int ll;
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;
		vector<ll> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		vector<ll> sum(n);
		sum[0] = a[0];
		for (int i = 1; i < n; i++)
			sum[i] = sum[i - 1] + a[i];
		while (q--)
		{
			ll k;
			cin >> k;
			cout << lower_bound(sum.begin(), sum.end(), k) - sum.begin() << "\n";
		}
	}
 
	return 0;
}