#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005]; 
ll n, k, sum = 0, mx = 0;

bool chk(ll m){
	ll tmp = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		if(tmp + arr[i] > m) cnt++, tmp = 0;
		tmp += arr[i];
	}
	return cnt >= k;
}	

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i], mx = max(mx, arr[i]);
	} 

	ll l = mx, r = sum;
	while(l <= r){
		ll m = (l + r) / 2;
		if(chk(m)) l = m + 1;
		else r = m - 1;
	}

	cout << l;

	return 0;
}
