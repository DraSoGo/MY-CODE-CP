#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie();cout.tie();
    int n;
    cout << "Enter minutes: ";
    cin >> n;
    cout << n/1440 << " days " << (n % 1440)/60 << " hours " << ((n % 1440)%60) << " minutes";
    return 0;
}