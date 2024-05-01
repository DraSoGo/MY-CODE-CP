#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> connections(m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        connections[a - 1].push_back(b - 1);
        connections[b - 1].push_back(a - 1);
    }

    vector<int> firstDay(q, -1);
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        for (int j = 0; j < connections[a].size(); j++)
        {
            if (connections[a][j] == b)
            {
                firstDay[i] = j + 1;
                break;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        cout << firstDay[i] << endl;
    }

    return 0;
}