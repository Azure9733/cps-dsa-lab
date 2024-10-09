#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    Node* next;
};

class Graph {
public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w) {
        Node* newNode = new Node;
        newNode->val = w;
        newNode->next = adj[v];
        adj[v] = newNode;

        newNode = new Node;
        newNode->val = v;
        newNode->next = adj[w];
        adj[w] = newNode;
    }

    int findLevel(int start, int X) {
        vector<bool> visited(V, false);
        list<int> queue;

        visited[start] = true;
        queue.push_back(start);

        int level = 0;
        while (!queue.empty()) {
            int size = queue.size();
            while (size--) {
                int node = queue.front();
                queue.pop_front();

                if (node == X) {
                    return level;
                }

                for (Node* temp = adj[node]; temp != NULL; temp = temp->next) {
                    if (!visited[temp->val]) {
                        visited[temp->val] = true;
                        queue.push_back(temp->val);
                    }
                }
            }
            level++;
        }

        return -1; // X not found
    }

private:
    int V;
    vector<Node*> adj;
};

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    Graph g(V);

    int E;
    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (in the format v1 v2):\n";
    for (int i = 0; i < E; ++i) {
        int v1, v2;
        cin >> v1 >> v2;
        g.addEdge(v1, v2);
    }

    int X;
    cout << "Enter the node to find the level of: ";
    cin >> X;

    int level = g.findLevel(0, X);
    if (level != -1) {
        cout << "Level of node " << X << " is: " << level << endl;
    } else {
        cout << "Node " << X << " not found in the graph" << endl;
    }

    return 0;
}