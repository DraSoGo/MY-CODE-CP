#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,atk,def,ch = 0,co = 0,c = 0;
    cin >> a;
    pair <int,int> A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> atk >> def;
        A[i].first = atk;
        A[i].second = def;
    }
    for (int i = 0; i < a; i++)
    {
        ch = 0;
        for (int j = 0; j < a; j++)
        {
            // cout << "Ai = " << A[i].first << " " << A[i].second;
            // cout << "\nBi = " << A[j].first << " " << A[j].second << "\n1\n";
            if (A[i].first <= A[j].first && A[i].second <= A[j].second && i != j)
            {
                ch = 1;
                break;
            }
            else if(A[j].first <= A[i].first && A[j].second <= A[i].second && i != j)
            {
                A[j].first = 0;
                A[j].second = 0;
            }
            // c++;
        }
        if (ch == 0)
        {
            co++;
        }
    }
    cout << co;
}