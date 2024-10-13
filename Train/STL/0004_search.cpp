#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    sort(v.begin(),v.end());
    for(int i:v)cout << i << ' ';
    cout << "\n";

    int cntl=1;
    int cnt=1;


    for(int i=0;i<v.size();i++){
        cout << cntl++ << ' ';
        if(v[i]==6){cout  << "\n"<< i<< "\n";break;}
    }

    int l=0,r=v.size(),mid;

    // while (l<r)
    // {
    //     mid=(l+r)/2;
    //     cout << cnt++ << ' ';
    //     if(v[mid]==6){
    //         cout << '\n'<< mid;
    //         break;
    //     }
    
    //     if(v[mid]<6){
    //         l=mid;
    //     }
    //     else r=mid-1;
    // }

    int idx=lower_bound(v.begin(),v.end(),6)- v.begin();
    cout << idx;


    
    return 0;
}