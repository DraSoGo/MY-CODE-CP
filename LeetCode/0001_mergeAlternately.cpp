#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        string st = "";
        char A[2*max(word1.size(),word2.size())],B[2*max(word1.size(),word2.size())];
        for (int i = 0; i < 2*max(word1.size(),word2.size()); i++)
        {
            if (i % 2 == 0 && i < 2*word1.size())
            {
                A[i] = word1[i/2];
            }
            else
            {
                A[i] = ' ';
            }
            if (i % 2 == 1 && i < 2*word2.size())
            {
                B[i] = word2[(i-1)/2];
            }
            else
            {
                B[i] = ' ';
            }
        }
        for (int i = 0; i < 2*max(word1.size(),word2.size()); i++)
        {
            if (A[i] != ' ')
            {
                st += A[i];
            }
            if (B[i] != ' ')
            {
                st += B[i];
            }
        }
        return st;
    }
    
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    string a,b;
    cin >> a >> b;
    cout << so.mergeAlternately(a,b);
    return 0;
}