#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w, int weight = 0) {
        adj[v].push_back({w, weight});
        // For undirected graphs:
        // adj[w].push_back({v, weight});
    }

    void printAdjList() {
        for (int i = 0; i < V; ++i) {
            cout << i << " -> ";
            for (auto it = adj[i].begin(); it != adj[i].end(); ++it) {
                cout << it->first << "(" << it->second << ") ";
            }
            cout << endl;
        }
    }

private:
    int V;
    vector<list<pair<int, int>>> adj;
};

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    Graph g(V);

    int E;
    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (in the format v1 v2 weight):\n";
    for (int i = 0; i < E; ++i) {
        int v1, v2, weight;
        cin >> v1 >> v2 >> weight;
        g.addEdge(v1, v2, weight);
    }

    g.printAdjList();

    return 0;
}