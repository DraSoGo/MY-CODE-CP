#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0,mx = INT_MIN;
    vector <int> B,D;
    cin >> n;
    int A[n],C[n];
    memset(C,0,sizeof(C));
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum + A[i] >= C[i])
        {
            sum += A[i];
            B.push_back(A[i]);
            C[i] = sum;
        }
        else
        {
            sum = A[i];
            B.clear();
            B.push_back(A[i]);
            C[i] = sum;
        }
        if (sum > mx)
        {
            mx = sum;
            D.clear();
            for (int i = 0; i < B.size(); i++)
            {
                D.push_back(B[i]);
            }
            
        }
    }
    if (mx > 0)
    {
        for (int i = 0; i < D.size(); i++)
        {
            cout << D[i] << " ";
        }
        cout << "\n" << mx << "\n";
    }
    else
    {
        cout << "Empty sequence";
    }
}