#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,x,y,c = 0;
    cin >> n >> m;
    vector <int> M[m];
    int T[m];
    int N[n];
    memset(T,0,sizeof(T));
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        T[x-1] = y;
    }
    for (int i = 0; i < n; i++)
    {
        if (!M[c].empty())
        {
            while (M[c].back() == 0)
            {
                //cout << "hi";
                c++;
                if (c >= m)
                {
                    c = 0;
                }
               
                
            }
        }
        cout << c << " " << N[i] << "\n";
        M[c].push_back(N[i]);
        if (M[c].size() == T[c] && T[c] != 0)
        {
            M[c].push_back(0);
        }
        c++;
        if (c >= m)
        {
            c = 0;
        }
        
    }
    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < M[i].size(); j++)
        {
            //cout << M[i][j] << " ";
            sum += M[i][j];
        }
        //cout << "\n";
        cout << sum << "\n";
    }
    
    return 0;
}