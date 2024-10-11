#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,ch = 0;
    cin >> A >> B >> C;
    for (int i = 1; i < B; i++)
    {
        for (int j = 1; j < B; j++)
        {
            for (int k = 1; k < B; k++)
            {
                if (i + j + k == A && i * j * k == B && (i * i) + (j * j) + (k * k) == C)
                {
                    cout << i << " " << j << " " << k;
                    ch = 1;
                    break;
                }
            }
            if (ch == 1)
            {
                break;
            }
        }
        if (ch == 1)
        {
            break;
        }
    }
    if (ch == 0)
    {
        cout << "No solution.";
    }
    
}