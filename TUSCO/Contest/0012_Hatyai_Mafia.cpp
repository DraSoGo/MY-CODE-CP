#include <bits/stdc++.h>
using namespace std;
 
class DisjSet
{
    int *rank, *parent, n;
 
public:
   
    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }
 
    void makeSet()
    {
        for (int i = 0; i < n; i++) 
        {
            parent[i] = i;
        }
    }
 
    int find(int x)
    {
        if (parent[x] != x) 
        {
 
            parent[x] = find(parent[x]);
 
        }
 
        return parent[x];
    }
 
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
 
        if (xset == yset)
            return;
 
        if (rank[xset] < rank[yset]) 
        {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) 
        {
            parent[yset] = xset;
        }
 
        else 
        {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};
 
int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    int a,b,x,y,ch = 0,ch1;
    cin >>  a >> b;
    int A[a],B[a];
    for (int i = 0; i < a; i++)
    {
        B[i] = 1;
        A[i] = 0;
    }
    
    DisjSet obj(a);
    for (int i = 0; i < b; i++)
    {
        cin >> x >> y;
        obj.Union(x,y);
    }
    for (int i = 1; i <= a; i++)
    {
        ch1 = 0;
        if (A[i - 1] == 0)
        {
            for (int j = i+1; j <= a; j++)
            {
                if (obj.find(i) == obj.find(j))
                {
                    A[j - 1] = 1;
                    B[ch]++;
                    ch1 = 1;
                }
            }
        }
        if (ch1 == 1)
        {
            ch++;
        }
    }
    sort(B,B+(a),greater <int>());
    cout << ch << "\n";
    for (int i = 0; i < ch; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}