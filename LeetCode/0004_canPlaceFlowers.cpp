#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int V[flowerbed.size()+2];
        for (int i = 1; i < flowerbed.size()+1; i++)
        {
            V[i] = flowerbed[i-1];
        }
        V[0] = V[flowerbed.size()+1] = 0;
        for (int i = 1; i < flowerbed.size()+1; i++)
        {
            if (V[i-1] == 0 && V[i+1] == 0 && V[i] == 0)
            {
                V[i] = 1;
                n--;
            }
        }
        if (n <= 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    vector <int> V;
    int n,a,b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        V.push_back(a);
    }
    cin >> b;
    cout << so.canPlaceFlowers(V,b);
    return 0;
}