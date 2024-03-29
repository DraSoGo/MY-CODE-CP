#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c;
    cin >> a;
    int arr [a];
    for (int i = 1;i <= a;i++){
        cin >> arr[i];
    }
    for (int j = a;j > 0 ;j--){
        cout << arr[j] << " ";
    }
}
