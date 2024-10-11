#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d = 3;
    int A[d][d],B[d][d],C[d][d];
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            C[i][j] = B[i][j] + A[i][j];
        }
    }
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
}