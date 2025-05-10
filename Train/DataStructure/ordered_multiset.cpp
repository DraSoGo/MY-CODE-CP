#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ordered_multiset <int> OMS;
    int n,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        OMS.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *OMS.find_by_order(i) << " ";
    }
    
    return 0;
}
/*
INPUT
6
1 1 2 2 3 1
OUTPUT
1 1 1 2 2 3
*/