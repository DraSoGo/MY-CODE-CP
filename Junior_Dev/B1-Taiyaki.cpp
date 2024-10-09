#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + ((n-1)/2)-1; j++)
            {
                if (i + j >= n-3 && i - j <= n-3)
                {
                    cout << "*";
                }
                else
                {
                    cout << ".";
                }
                
            }
            cout<< "\n";
        }
    }
    
    return 0;
}