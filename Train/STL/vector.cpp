#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> V(3);
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> V[i];
        // V.push_back(x);
    }
    
    // V.push_back(10);
    // V.push_back(20);
    // V.push_back(30);
    for (auto i:V)
    {
        cout << i << "\n";
    }
    V.clear();
    cout << V.size();
    
    return 0;
}