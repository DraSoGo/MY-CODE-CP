#include <bits/stdc++.h>
using namespace std;

vector <int> bc;

void bcouter (int m,int n)
{
    if (bc.size() == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << bc.at(i) << " ";
        }
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            bc.push_back(i);
            bcouter(m+1,n);
            bc.pop_back();
        }
    }
}

int main()
{
    int n;
    cin >> n;
    bcouter(0,n);
}