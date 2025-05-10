#include "lis.h"
#include <vector>
using namespace std;

int lis(const vector<int>& nums) {

    vector<int>lis ;

    for(auto i : nums){
        auto it = lower_bound(lis.begin() , lis.end() , i) ;
        if(it == lis.end()){
            lis.push_back(i) ;
        }
        else {
            *it = i ;
        }
    }
    
    return lis.size() ;
}