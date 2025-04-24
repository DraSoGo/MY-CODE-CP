#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using order_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    order_multiset <int> OMS;
    OMS.insert(1);
    OMS.insert(2);
    OMS.insert(1);
    cout << *OMS.find_by_order(0) << " ";
    cout << *OMS.find_by_order(1) << " ";
    cout << *OMS.find_by_order(2) << " ";
    return 0;
}