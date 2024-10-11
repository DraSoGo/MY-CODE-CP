#include <bits/stdc++.h>
using namespace std;
int k,w1,l1;
vector <int> N;
void gen(int w,int l)
{
    if (w == k || l == k)
    {
        w = w1;
        l = l1;
        for (int i = 0; i < N.size(); i++)
        {
            if (N[i] == 1)
            {
                cout << 'W';
            }
            else
            {
                cout << 'L';
            }
            cout << " ";
        }
        cout << "\n";
    }
    else
    {
        N.push_back(1);
        gen(w+1,l);
        N.pop_back();
        N.push_back(0);
        gen(w,l+1);
        N.pop_back();
    }
}
int main()
{
    cin >> k >> w1 >> l1;
    gen(w1,l1);
}