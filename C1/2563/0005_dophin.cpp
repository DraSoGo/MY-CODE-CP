#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,x;
    cin >> t;
    while (t--)
    {
        int idx = 3,j = 1,sum = 0,id;
        cin >> x;
        while (sum < x)
        {
            idx = 3 * j;
            sum += idx;
            // cout << sum << "\n";
            j++;
        }
        sum -= idx;
        j-=1;
        idx = 3*j;
        // cout << sum << " " << j << " " << idx << "\n";
        id = x - sum;
        if (id > 2*(idx/3))
        {
            cout << "splash";
        }
        else if (id <= 1*(idx/3))
        {
            cout << j << " " << "dolphin";
            if (j > 1)
            {
                cout << "s";
            }
            
        }
        else
        {
            cout << j << " " << "jump";
            if (j > 1)
            {
                cout << "s";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
