#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> cost(N);
    vector<int> properties(N, 0);
    for (int i = 0; i < N; ++i)
    {
        cin >> cost[i];
        for (int j = 0; j < M; ++j)
        {
            int property;
            cin >> property;
            if (property == 1)
            {
                properties[i] |= (1 << j);
            }
        }
    }

    int minCost = numeric_limits<int>::max();
    for (int mask = 1; mask < (1 << N); ++mask)
    {
        int combinedProperties = 0;
        int currentCost = 0;
        for (int i = 0; i < N; ++i)
        {
            if (mask & (1 << i))
            {
                combinedProperties |= properties[i];
                currentCost += cost[i];
            }
        }
        if (combinedProperties == (1 << M) - 1)
        {
            minCost = min(minCost, currentCost);
        }
    }
    cout << minCost << endl;

    return 0;
}
