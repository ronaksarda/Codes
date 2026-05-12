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
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.displayMatrix();
    g.displayList();

    return 0;
}