#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c1,c2,c3;
    string A,B,C;
    cin >> a >> b >> A >> B >> C;
    for (int j = b - 1; j >= 0; j--)
    {
        for (int i = 0; i < a; i++)
        {
            c1 = A[i] - '0';
            c2 = B[i] - '0';
            c3 = C[j] - '0';
            int X[3];
            X[0] = c1;
            X[1] = c2;
            X[2] = c3;
            sort(X,X + 3);
            if (c1 == X[1])
            {
                C[j] = A[i];
            }
            else if (c2 == X[1])
            {
                C[j] = B[i];
            }
        }
    }
    cout << C;
    return 0;
}