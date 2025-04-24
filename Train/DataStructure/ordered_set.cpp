#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using order_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    order_set <int> OS;
    OS.insert(2);
    OS.insert(1);
    OS.insert(3);
    OS.insert(1);
    cout << OS.size() << " " << *OS.find_by_order(1) << " " << OS.order_of_key(2);;
    return 0;
}