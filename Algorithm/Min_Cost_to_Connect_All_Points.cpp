#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<pair<long long,long long>>>& graph,
             vector<tuple<long long,long long,long long>>& allEdges,
             long long u, long long v, long long w)
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

vector<tuple<long long,long long,long long>> kruskal(vector<vector<pair<long long,long long>>>& graph,
                                   vector<tuple<long long,long long,long long>>& allEdges)
{
    vector <long long> parent(graph.size());

    vector <long long> ranksize(graph.size());

    vector <tuple<long long,long long,long long>> result;

    make_set(parent);

   sort(allEdges.begin(),allEdges.end(),comp);

    for (tuple <long long,long long,long long> e: allEdges) {
        long long s = get<0>(e);
        long long t = get<1>(e);
        long long w = get<2>(e);

        if (find_par(parent,s) != find_par(parent,t))
        {
            result.emplace_back(make_tuple(s,t,w));

            union_set(parent,ranksize,s,t);
        }
    }
    return result;
}
long long prim(vector<vector<pair<long long,long long>>>& graph,long long start,long long sum)
{
    vector <long long> parent(graph.size(),-1);

    vector <long long> key(graph.size(),9999999);

    vector <bool> mstSet(graph.size(),false);

    key[start] = 0;

    priority_queue <pair<long long,long long>,vector <pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    pq.push(make_pair(0,start));
    vector <tuple<long long,long long,long long>> result;
    while (!pq.empty())
    {
        long long v = pq.top().second;
        pq.pop();
        if (mstSet[v] == false && parent[v] != -1)
        {
            result.emplace_back(make_tuple(parent[v],v,key[v]));
            sum = sum + key[v];
        }
        mstSet[v] = true;
        for(auto x:graph[v])
        {
            long long a = x.first;
            long long w = x.second;
            if (mstSet[a] == false && key[a] > w)
            {
                parent[a] = v;
                key[a] = w;
                pq.push(make_pair(key[a],a));
            }
        }
    }
    return sum;
}

int main()
{
    long long V;
    long long a,b,x;
    cin >> V;
    vector <pair<long long,long long>> A;
    vector<vector<pair<long long,long long>>> graph(V, vector<pair<long long,long long>>(V));
    vector<tuple<long long,long long,long long>> allEdges;
    for (long long i = 0; i < V; i++)
    {
        cin >> a >> b;
        A.push_back(make_pair(a,b));
    }
    for (long long i = 0; i < A.size(); i++)
    {
        for (long long j = i + 1; j < A.size(); j++)
        {
            x = abs(A[i].first - A[j].first) + abs(A[i].second - A[j].second);
            addEdge(graph, allEdges, i, j, x);
        }
    }
   vector<tuple<long long,long long,long long>> res = kruskal(graph, allEdges);
   cout << prim(graph,0,0);
   return 0;
}