#include <bits/stdc++.h>
using namespace std;
int A[1000];
int k,ch;
vector <int> bc;
void bcout(int m,int n)
{
    if (ch == 1)
    {
        return;
    }
    if (m == n)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            if (bc[i] == 0)
            {
                sum -= A[i];
            }
            else
            {
                sum += A[i];
            }
        }
        if (sum > 0 && sum <= k && k % sum == 0)
        {
            ch = 1;
            return;
        }
        
    }
    else
    {
        bc.push_back(0);
        bcout(m+1,n);
        bc.pop_back();
        bc.push_back(1);
        bcout(m+1,n);
        bc.pop_back();
    }
    
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> k;
        for (int j = 0; j < p; j++)
        {
            cin >> A[j];
        }
        ch = 0;
        bcout(0,p);
        if (ch == 1)
        {
            cout << 'Y';
        }
        else
        {
            cout << 'N';
        }
        cout << "\n";
    }
    
}