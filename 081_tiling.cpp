#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        float n,m;
        cin >> n >> m;
        int newn = floor(sqrt(n));
        int newm = (m-4)/4;
        cout << min(newm,newn)+2 << '\n';
    }
    return 0;
}