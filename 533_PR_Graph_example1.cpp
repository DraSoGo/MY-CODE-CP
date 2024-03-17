#include <bits/stdc++.h>
using namespace std;
void ade(vector <pair<int,int>> eg[],int u,int v,int w)
{
    eg[u].push_back(make_pair(v,w));
}
void pre(vector <pair<int,int>> eg[],int n,string N[])
{
    int ch = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < eg[i].size(); j++)
        {
            if (ch == 0)
            {
                cout << N[i];
                ch = 1;
            }
            else
            {
                for (int i = 0; i < N[i].length(); i++)
                {
                    cout << " ";
                }
            }
            cout << "    -> ";
            cout << N[eg[i][j].first] << " " << eg[i][j].second << " coins"; 
            cout << "\n";
        }
        if (eg[i].empty())
        {
            cout << N[i] << "    -> -"; 
        }
        ch = 0;
    }
    
}
int main()
{
    int n = 5;
    string N[n] = {"Top","May","Nut","Kim","Gun"};
    vector <pair<int,int>> eg[n];
    ade(eg,0,1,12);
    ade(eg,0,4,4);
    ade(eg,1,4,15);
    ade(eg,1,3,19);
    ade(eg,2,1,2);
    ade(eg,2,3,18);
    ade(eg,3,4,4);
    pre(eg,n,N);
}