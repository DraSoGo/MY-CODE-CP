#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int A[2][n.length()];
    for (int i = 0; i < n.length(); i++)
    {
        cin >> A[0][i];
        A[1][i] = n[i] - 'A';
    }
    int mx = INT_MIN;
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < n.length(); j++)
        {
            int x = 0;
            for (int k = j; k < n.length(); k++)
            {
                if (A[1][j] == A[1][k])
                {
                    x++;
                }
            }
            mx = max(x,mx);
        }
        for (int j = 0; j < n.length(); j++)
        {
            A[1][j] = (A[1][j] + A[0][j]) % 26;
        }
    }
    cout << mx;
}