#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[3] = {'A','B','C'},B[4] = {'B','A','B','C'},G[6] = {'C','C','A','A','B','B'};
    int n,sA = 0,sB = 0,sG = 0;
    string X;
    cin >> n >> X;
    for (int i = 0; i < n; i++)
    {
        if (X[i] == A[i % 3])
        {
            sA++;
        }
        if (X[i] == B[i % 4])
        {
            sB++;
        }
        if (X[i] == G[i % 6])
        {
            sG++;
        }
    }
    int mx = max(sA,max(sB,sG));
    cout << mx << "\n";
    if (mx == sA)
    {
        cout << "Adrian" << "\n";
    }
    if (mx == sB)
    {
        cout << "Bruno" << "\n";
    }
    if (mx == sG)
    {
        cout << "Goran" << "\n";
    }
    
}