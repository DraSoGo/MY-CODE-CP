#include <bits/stdc++.h>
using namespace std;
main(){
    int x = 0,y = 0,a; 
    char b;
    cin >> a;
    while(a != 0){
        if(a == 1){
            cout << "x or y\n";
            cin >> b;
            if(b == 'x'){
                x = x+1;
            }
            if(b == 'y')
            {
                y = y+1;
            }
            
        }
    
        if(a == 2){
            cout << x << " " << y << "\n";
        }
        cin >> a;
        }
}