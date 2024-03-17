#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,c = 0;
    cin >> a;
    int A[a+1],B[a+1];
    A[0] = 1;B[0] = 1;
    for (int i = 1; i < a + 1; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < a + 1; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (A[i] == B[i] && A[i+1] == B[i+1])
        {
            c++;
        }
        else if (A[i] == B[i+1] && A[i+1] == B[i])
        {
            c++;
        }
        else if (A[i] == B[i+1] && A[i+1] == B[i])
        {
            c++;
        }
        else if (A[i] > B[i] && A[i] < B[i + 1] && A[i + 1] != B[i] && A[i + 1] != B[i + 1] && A[i + 1] != A[i] + 1 && A[i + 1] != A[i] - 1)
        {
            c++;
        }
        else if (A[i] > B[i + 1] && A[i] < B[i] && A[i + 1] != B[i] && A[i + 1] != B[i + 1] && A[i + 1] != A[i] + 1 && A[i + 1] != A[i] - 1)
        {
            c++;
        }
        else if (A[i + 1] > B[i] && A[i + 1] < B[i + 1] && A[i] != B[i] && A[i] != B[i + 1] && A[i] != A[i] + 1 && A[i] != A[i] - 1)
        {
            c++;
        }
        else if (A[i + 1] > B[i + 1] && A[i + 1] < B[i] && A[i] != B[i] && A[i] != B[i] && A[i] != A[i] + 1 && A[i] != A[i] - 1)
        {
            c++;
        }
        
    }
    cout << c;
}