#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,id,fl,ch;
    char com;
    cin >> a >> b;
    pair <int,int> A[b];
    vector <pair<int,int>> B;    
    for (int i = 0; i < b; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    while (com != 'X')
    {
        cin >> com;
        if (com == 'D')
        {
            if (B.size() != 0)
            {
                cout << B.front().second << "\n";
                B.erase(B.begin());
            }
            else
            {
                cout << "empty\n";
            }
        }
        else if (com == 'X')
        {
            cout << 0 << "\n";
        }
        else if (com == 'E')
        {
            cin >> id;
            for (int i = 0; i < b; i++)
            {
                if (id == A[i].second)
                {
                    fl = A[i].first;
                    break;
                }
            }
            ch = 0;
            for (int i = 0; i < B.size(); i++)
            {
                if (fl == B[i].first && B[i].second != B.back().second)
                {
                    ch = 1;
                }
                else
                {
                    if (ch == 1)
                    {
                        B.insert(B.begin() + i,make_pair(fl,id));
                        break;
                    }
                    else
                    {
                        ch = 2;
                        B.push_back(make_pair(fl,id));
                        break;
                    }
                }
            }
            if (ch == 0)
            {
                B.push_back(make_pair(fl,id));
            }
        }
        // for (auto [f,s] :B)
        // {
        //     cout << s << " ";
        // }
        // cout << "\n";
    }
}