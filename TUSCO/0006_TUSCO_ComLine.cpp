#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    long long A[b];
    vector <int> B;
    for (int i = 0; i < b; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < b-1; i++)
    {
        //cout << i << "\n";
        if(A[i]-A[i - 1] < abs(A[i] - A[i + 1]) && A[i] != -1)
        {
            B.push_back(A[i] - A[i - 1]);
            A[i] = -1;
            A[i - 1] = -1;
            //cout << "he\n";
        }
        else if(A[i]-A[i - 1] > abs(A[i] - A[i + 1]) && A[i] != -1)
        {
            B.push_back(abs(A[i] - A[i + 1]));
            A[i] = -1;
            A[i + 1] = -1;
            //cout << "ho\n";
        }
        
    }
    
    //cout << B[0] << "\n";
    sort(B.begin(),B.end());
    int sum = 0;
    for(int i = 0; i < a; i++)
    {
        sum += B[i];
    }
    cout << sum;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long a,b,c;
//     cin >> a >> b;
//     long long A[b];
//     vector <int> B;
//     for (int i = 0; i < b; i++)
//     {
//         cin >> A[i];
//         if(i%2 == 1)
//         {
//             B.push_back(A[i] - A[i - 1]);
//         }
//     }
//     sort(B.begin(),B.end());
//     int sum = 0;
//     for(int i = 0; i < a; i++)
//     {
//         sum += B[i];
//     }
//     cout << sum;
// }