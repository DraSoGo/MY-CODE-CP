#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = n; i >= 0; i -= 3)
    {
        v.push_back(i);
    }
    if (n % 2 == 1)
    {
        v.push_back(0);
    }
    for (int i = 0; i <= 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n; j++)
        {
            int chk = 1;
            for (int k = 0; k < v.size(); k++)
            {
                double dist = sqrt(((i - n) * (i - n)) + ((j - n) * (j - n)));
                if (dist > v[k] - 0.5 && dist < v[k] + 0.5)
                {
                    cout << "# ";
                    chk = 0;
                    break;
                }
                else if (dist >= n + 0.5)
                {
                    cout << "  ";
                    chk = 0;
                    break;
                }
            }
            if (chk)
            {
                cout << ". ";
            }
        }
        cout << "\n";
    }
    return 0;
}