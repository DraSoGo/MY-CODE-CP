#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ch = 0,c;
    cin >> n;
    vector <int> V;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        c = 0;
        for (int j = 0; j < V.size(); j++)
        {

            if (a == V[j])
            {
                ch++;
                c = 1;
                break;
            }
        }
        if(c == 0);
        {
            V.push_back(a);
        }
    }
    cout << ch;
}