#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,b,c,ansa = 0,ansb = 0,ansc = 0;
    double sum = 0;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    a = ceil(sum/n);
    b = floor(sum/n);
    sort(A,A+n);
    c = A[n/2];
    for (int i = 0; i < n; i++)
    {
        // cout << A[i] << " " << a<< "\n";
        ansa += abs(a-A[i]);
        ansb += abs(b-A[i]);
        ansc += abs(c-A[i]);
    }
    cout << min(ansa,min(ansb,ansc));
    return 0;
}