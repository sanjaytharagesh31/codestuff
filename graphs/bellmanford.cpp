#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Number of vertices in graph: ";
    cin >> n;
    cout << "Number of edges in graph: ";
    cin >> m;
    int graph[m][3]; //u, v, weight
    int dist[n];
    int anst[n];
    cout << "Input the graph (v1 to v2 weight (1 5 8)) directed graph" << endl;
    for(int i=0; i<m; i++) {
        cin >> graph[i][0] >> graph[i][1] >> graph[i][2];
    }
    for(int i=0; i<n; i++)
        dist[i]=INT16_MAX;
    dist[0] = 0;
    anst[0]=0;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<m; j++) {
            if(dist[graph[j][1]] > graph[j][2]+dist[graph[j][0]]) {
                dist[graph[j][1]] = graph[j][2]+dist[graph[j][0]];
                anst[graph[j][1]] = graph[j][0];
            }
        }
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<m; j++) {
            if(dist[graph[j][1]] > graph[j][2]+dist[graph[j][0]]) {
                cout << "Negative edge cycle detected" << endl;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        cout << i << " -> " << dist[i] << endl;
    }

    return 0;
}
