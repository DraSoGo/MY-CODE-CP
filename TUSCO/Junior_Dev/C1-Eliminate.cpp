#include <bits/stdc++.h>
using namespace std;

long long fp(long long n) {
    long long p = 0;
    for (long long i = 2; i <= n; ++i) {
        p = (p + 2) % i;
    }
    return p + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        
        cout << fp(n) << "\n";
    }
    
    return 0;
}