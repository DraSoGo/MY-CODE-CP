#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<pair<long long,long long>>>& graph,vector<tuple<long long,long long,long long>>& allEdges,long long u, long long v, long long w)
{
    graph[u].push_back(make_pair(v, w));
    graph[v].push_back(make_pair(u, w));
    allEdges.emplace_back(make_tuple(u,v,w));
}
void make_set(vector<long long>& parent)
{
    for (long long i = 0; i < parent.size();i++)
        parent[i] = i;
}
bool comp(const tuple<long long,long long,long long>& a, const tuple<long long,long long,long long>& b)
{
    long long first = get<2>(a);
    long long second = get<2>(b);
    if (first < second)
        return true;
    return false;
}
long long find_par(vector<long long>& parent, long long x)
{
    if(parent[x] != x)
        parent[x] = find_par(parent,parent[x]);
    return parent[x];
}

void union_set(vector<long long>& parent, vector<long long>& ranksize, long long x, long long y)
{
    long long par_x = find_par(parent,x);
    long long par_y = find_par(parent,y);

    if (par_x == par_y)
        //return
        return;

    if (ranksize[par_x] > ranksize[par_y])
        parent[par_y] = par_x;

    else
    {
        parent[par_x] = par_y;

        if (ranksize[par_x] == ranksize[par_y])
            ranksize[par_y]++;
    }
}
long long kruskal(vector<vector<pair<long long,long long>>>& graph,vector<tuple<long long,long long,long long>>& allEdges,long long sum)
{
    vector <long long> parent(graph.size());
    vector <long long> ranksize(graph.size());
    vector <tuple<long long,long long,long long>> result;
    make_set(parent);
   sort(allEdges.begin(),allEdges.end(),comp);

    for (tuple <long long,long long,long long> e: allEdges) 
    {
        long long s = get<0>(e);
        long long t = get<1>(e);
        long long w = get<2>(e);
        if (find_par(parent,s) != find_par(parent,t))
        {
            result.emplace_back(make_tuple(s,t,w));
            union_set(parent,ranksize,s,t);
            sum = sum + w;
        }
    }
    return sum;
}
int main()
{
    long long V,x,y,z;
    cin >> V;
    pair <long long,long long> A[V];
    vector<vector<pair<long long,long long>>> graph(V, vector<pair<long long,long long>>(V));
    vector<tuple<long long,long long,long long>> allEdges;
    for (long long i = 0; i < V; i++)
    {
        cin >> x >> y;
        A[i].first = x;
        A[i].second = y;
    }
    for (long long i = 0; i < V; i++)
    {
        for (long long j = i+1; j < V; j++)
        {
            z = abs(A[i].first - A[j].first) + abs(A[i].second - A[j].second);
            addEdge(graph, allEdges, i, j, z);
        }
    }
   long long res = kruskal(graph, allEdges,0);
   cout << res << "\n";
   return 0;
}