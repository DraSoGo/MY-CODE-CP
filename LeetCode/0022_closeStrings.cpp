#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio();cin.tie(0);cout.tie(0);
        }
        bool closeStrings(string word1, string word2)
        {
            int A[26],B[26];
            memset(A,0,sizeof(A));
            memset(B,0,sizeof(B));
            if (word1.size() != word2.size())
            {
                return 0;
            }
            for (int i = 0; i < word1.size(); i++)
            {
                A[word1[i]-'a']++;
                B[word2[i]-'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if ((A[i] != 0 && B[i] == 0) || (A[i] == 0 && B[i] != 0))
                {
                    return 0;
                }
            }
            sort(A,A+26);
            sort(B,B+26);
            for (int i = 0; i < 26; i++)
            {
                if (A[i] != B[i])
                {
                    return 0;
                }
            }
            return 1;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, k;
    string s1,s2;
    int x;
    cin >> s1 >> s2;
    cout << so.closeStrings(s1,s2);
    return 0;
}