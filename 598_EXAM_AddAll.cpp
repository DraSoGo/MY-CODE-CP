#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,ans = 0,sum,b,x,y;
    cin >> n;
    priority_queue <long long,vector <long long>,greater <long long>> A;
    vector <long long> B;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A.push(a);
    }
    if (n == 1)
    {
        B.push_back(a);
    }
    while (A.size() > 1)
    {
        x = A.top();
        A.pop();
        y = A.top();
        A.pop();
        sum = x+y;
        A.push(sum);
        B.push_back(sum);
    }
    for(auto i:B)
    {
        ans += i;
    }
    cout << ans;
}