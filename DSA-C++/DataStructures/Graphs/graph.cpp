#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int V;
    int** adjMatrix;
    vector<int>* adjList;

public:
    Graph(int vertices) {
        V = vertices;
        adjMatrix = new int*[V];
        for (int i = 0; i < V; i++) {
            adjMatrix[i] = new int[V]{0};
        }
        adjList = new vector<int>[V];
    }

    void addEdge(int u, int v) {
        // Matrix
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; 

        // List
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void displayMatrix() {
        cout << "\nAdjacency Matrix:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) cout << adjMatrix[i][j] << " ";
            cout << endl;
        }
    }

    void displayList() {
        cout << "\nAdjacency List:\n";
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int neighbor : adjList[i]) cout << neighbor << " ";
            cout << endl;
        }
    }
    void BFS(int start) {
        vector<bool> visited(V, false);
        vector<int> queue;

        visited[start] = true;
        queue.push_back(start);

        while (!queue.empty()) {
            int current = queue.front();
            cout << current << " ";
            queue.erase(queue.begin());

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    queue.push_back(neighbor);
                }
            }
        }
    }
    void DFSUtil(int start, vector<bool>& visited) {
        visited[start] = true;
        cout << start << " ";
        for (int neighbor : adjList[start]) {
            if (!visited[neighbor]) DFSUtil(neighbor, visited);
        }
    }
    void DFS(int start) {
        vector<bool> visited(V, false);
        DFSUtil(start, visited);
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "BFS starting from 0: ";
    g.BFS(0); 
    // Expected: 0 1 2 3 4 (Visits immediate level neighbors 1 and 2 first)
    
    cout << "\nDFS starting from 0: ";
    g.DFS(0); 
    // Expected: 0 1 3 4 2 (Dives deep down the branch 0 -> 1 -> 3 first)

    return 0;
}