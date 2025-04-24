#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        fin >> A[i];
    }
    sort(A,A+n);
    int l = 0,mx = 0;
    for (int r = 0; r < n; r++)
    {
        while (A[r] > 2*A[l])
        {
            l++;
        }
        mx = max(mx,r-l+1);
    }
    fout << n - mx;
    return 0;
}
