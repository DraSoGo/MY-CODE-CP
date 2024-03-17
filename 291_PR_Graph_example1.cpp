#include <bits/stdc++.h>
using namespace std;
void add_edge(vector <pair<string,int>> graph[],int u,string y,int x)
{
    graph[u].push_back(make_pair(y,x));
}
int main()
{
    int V = 5,ch;
    vector <pair<string,int>> graph[V];
    add_edge(graph,0,"May",12);
    add_edge(graph,0,"Gun",4);
    add_edge(graph,1,"Gun",15);
    add_edge(graph,1,"Kim",19);
    add_edge(graph,2,"May",2);
    add_edge(graph,2,"Kim",18);
    add_edge(graph,3,"Gun",4);
    add_edge(graph,4,"-",0);
    for (int i = 0; i < V; i++)
    {
        string h;
        if (i == 0)
        {
            h = "Top";
            ch = 2;
        }
        else if (i == 1)
        {
            h = "May";
            ch = 2;
        }
        else if (i == 2)
        {
            h = "Nut";
            ch = 2;
        }
        else if (i == 3)
        {
            h = "Kim";
            ch = 1;
        }
        else if (i == 4)
        {
            h = "Gun";
            ch = 0;
        }
        cout << h << "   -> ";
        for (auto V:graph[i])
        {
            cout << V.first;
            if (V.second != 0)
            {
                cout << " " << V.second << " coins";
            }
            if (ch > 1)
            {
                cout << "\n      -> ";
            }
            ch--;
        }
        cout << "\n\n";
    }
    
}