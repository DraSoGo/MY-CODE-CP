#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a;
    cin >> a;
    vector <long long> Fibo;
    Fibo.push_back(1);
    Fibo.push_back(1);
    Fibo.push_back(1);
    Fibo.push_back(1);
    for (int i = 4; i < a; i++)
    {
        //cout << Fibo[i] << "\n";
        Fibo.push_back(((Fibo[i-1]%mod)+(Fibo[i-2]%mod)+(Fibo[i-3]%mod)+(Fibo[i-4]%mod))%mod);
    }
    cout << Fibo[a-1];
    return 0;
}