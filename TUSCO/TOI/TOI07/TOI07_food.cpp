#include <bits/stdc++.h>
using namespace std;
vector <int> A;
int a,n;
bool check(int u)
{
    for (int i = 0; i < u; i++)
    {
        if (A[i] == A[u])
        {
            return false;
        }
    }
    return true;
}
void gen(int N[])
{
    if (A.size() == a)
    {
        //cout << i << "\n";
        for (int i = 0; i < n; i++)
        {
            if (A[0] == N[i])
            {
                return;
            }
        }
        for (int j = 0; j < A.size(); j++)
        {
            cout << A[j] << " ";
        }
        cout << "\n";
    }
    else
    {
        for (int j = 1; j <= a; j++)
        {
            A.push_back(j);
            if (check(A.size()-1) == true)
            {
                gen(N);
            }
            
            A.pop_back();
        }
    }
}
int main()
{
    cin >> a >> n;
    int N[n];
    for (int j = 0; j < n; j++)
    {
        cin >> N[j];
    }
    sort(N,N+n);
    gen(N);
}