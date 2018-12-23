//Sanjay Tharagesh R S
//Floyd warshall algorithm for directed graph
//for undirected graph input the same edge twice with inverted incident vertices

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Number of vertices in graph: ";
    cin >> n;
    cout << "Number of edges in graph: ";
    cin >> m;

    int graph[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            i==j?graph[i][j] = 0:graph[i][j]=1000;
        }
    }
    cout << "Input the graph (v1 to v2 weight (1 5 8)) directed graph" << endl;
    for(int i=0; i<m; i++) {
        int s, e, w;
        cin >> s >> e >> w;
        graph[s][e] = w;
    }
    
    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(graph[i][k]+graph[k][j] < graph[i][j]) 
                    graph[i][j] = graph[i][k]+graph[k][j];
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << graph[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}