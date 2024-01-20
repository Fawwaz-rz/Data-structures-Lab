//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <limits>
//
//using namespace std;
//
//class Graph {
//private:
//    int V;
//    vector<pair<int, int>>* adj; 
//
//public:
//    Graph(int V) {
//        this->V = V;
//        adj = new vector<pair<int, int>>[V];
//    }
//    void addEdge(int u, int v, int weight) {
//        adj[u].push_back(make_pair(v, weight));
//        adj[v].push_back(make_pair(u, weight)); 
//    }
//     void printSolution(vector<int>& dist) {
//        cout << "Vertex \t\t Distance from Source\n";
//        for (int i = 0; i < V; ++i) {
//            cout << i << " \t\t " << dist[i] << endl;
//        }
//    }
//};
//
//int main() {
//    ifstream file("lab12text.txt");
//    if (!file) {
//        cerr << "Unable to open the file" << endl;
//        return 1;
//    }
//
//    int V, E;
//    file >> V >> E; 
//
//    Graph graph(V);
//
//    for (int i = 0; i < E; ++i) {
//        int u, v, weight;
//        file >> u >> v >> weight;
//        graph.addEdge(u, v, weight);
//    }
//    file.close();
//
//    int sourceVertex = 0;
//
//    cout << "Shortest distances from vertex " << sourceVertex << " using array-based priority queue:\n";
//    //graph.dijkstraArray(sourceVertex);
//
//    return 0;
//}
