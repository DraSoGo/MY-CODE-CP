#include <bits/stdc++.h>
using namespace std;

int cal(vector <int> V)
{
    int x = V.size(),sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += V[i]*(pow(2,x-i)-1);
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int z,o,n,co = 1;
    cin >> z >> o >> n;
    vector <int> V;
    for (int i = 0; i < z; i++)
    {
        V.push_back(0);
    }
    for (int i = 0; i < o; i++)
    {
        V.push_back(1);
    }
    V.push_back(2);
    if (co == n)
    {
        cout << cal(V);
    }
    else
    {
        while (next_permutation(V.begin(),V.end()))
        {
            int ch = 0;
            for (int i = 0; i < V.size(); i++)
            {
                if (V[i] == 2)
                {
                    ch = 1;
                }
                if (ch == 1 && V[i] == 1)
                {
                    ch = 2;
                    break;
                }
            }
            if (ch == 2)
            {
                continue;
            }
            co++;
            if (co == n)
            {
                cout << cal(V);
                break;
            }
        }
    }
    if (co != n)
    {
        cout << "NONE";
    }
    
    return 0;
}