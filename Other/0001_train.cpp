#include <iostream>
#include <vector>
#include <unordered_map>
#include <tr1/memory>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iterator>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <valarray>
#include <cstring>
#include <climits>
#include <cassert>
#include <unordered_set>
#include <ext/hash_map>
#include <ext/hash_set>

using namespace std;
using namespace std::tr1;

// Define the maximum number of rooms in the maze
const int MAX_ROOMS = 1000;

// Define the graph structure
struct Graph {
    vector<int> adj[MAX_ROOMS];
};

// Define the DFS function to explore the rooms
void dfs(Graph& graph, int room, unordered_set<int>& visited, vector<int>& path) {
    // Mark the current room as visited
    visited.insert(room);
    // Add the current room to the path
    path.push_back(room);

    // Explore the adjacent rooms
    for (int neighbor : graph.adj[room]) {
        if (visited.find(neighbor) == visited.end()) {
            // If the neighbor is not visited, explore it
            dfs(graph, neighbor, visited, path);
        }
    }
}

// Define the function to generate all possible permutations of the room sequence
void generatePermutations(vector<int>& path, vector<vector<int>>& permutations) {
    // Base case: if the path has only one room, add it to the permutations
    if (path.size() == 1) {
        permutations.push_back(path);
        return;
    }

    // Recursive case: generate all possible permutations by removing the last room
    // and adding it back after exploring the remaining rooms
    vector<int> remainingPath = vector<int>(path.begin(), path.end() - 1);
    generatePermutations(remainingPath, permutations);
    path.push_back(path.back());
    path.pop_back();
    generatePermutations(path, permutations);
}

// Define the function to solve the maze problem
vector<vector<int>> solveMaze(Graph& graph, int startRoom) {
    // Initialize the visited set and the path vector
    unordered_set<int> visited;
    vector<int> path;

    // Start the DFS from the given room
    dfs(graph, startRoom, visited, path);

    // Generate all possible permutations of the path
    vector<vector<int>> permutations;
    generatePermutations(path, permutations);

    return permutations;
}

// Define the main function
int main() {
    // Read the number of rooms and the connections
    int N;
    cin >> N;
    Graph graph;
    for (int i = 0; i < N-1; i++) {
        int room1, room2;
        cin >> room1 >> room2;
        graph.adj[room1].push_back(room2);
        graph.adj[room2].push_back(room1);
    }

    // Read the starting room
    int startRoom;
    cin >> startRoom;

    // Solve the maze problem
    vector<vector<int>> permutations = solveMaze(graph, startRoom);

    // Print the permutations
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        if (i != 0) {
            cout << ",";
        }
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            if (j != 0) {
                cout << ",";
            }
            cout << permutations[i][j];
        }
        cout << "]";
    }
    cout << "]" << endl;

    return 0;
}
