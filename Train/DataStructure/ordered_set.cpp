#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T,null_type,less <T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    ordered_set <int> OS;
    int n,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        OS.insert(x);
    }
    for (int i = 0; i < OS.size(); i++)
    {
        cout << *OS.find_by_order(i) << " ";
    }
    return 0;
}
/*
INPUT
6
1 1 2 2 3 1
OUTPUT
1 2 3
*/