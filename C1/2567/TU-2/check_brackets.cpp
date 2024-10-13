#include <bits/stdc++.h>
using namespace std;

int A[100005];
vector <int> V;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string w;
        stack <char> S;
        bool b = 0;
        getline(cin,w);
        for (int i = 0; i < w.size(); i++)
        {
            if (w[i] == '(')
            {
                S.push('(');
            }
            else if (w[i] == ')')
            {
                if (S.empty())
                {
                    b = 1;
                    break;
                }
                else
                {
                    S.pop();
                }
                
            }
        }
        if(S.empty() && b == 0)
        {
            cout << "Safe\n";
        }
        else
        {
            cout << "Danger\n";
        }
        while (!S.empty())
        {
            S.pop();
        }
        
        
    }
    return 0;
}