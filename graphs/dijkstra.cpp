//Sanjay Tharagesh R S
//Dijkstra algorithm for directed graph
//for undirected graph input the same edge twice with inverted incident vertices

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cout << "Number of vertices in graph: ";
    cin >> n;
    cout << "Number of edges in graph: ";
    cin >> m;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //distance vertex
    map<int, int> mp; //vertex distance
    vector<pair<int, int>> g[n];
    cout << "Input the graph (v1 to v2 weight (1 5 8)) directed graph" << endl;
    for(int i=0; i<m; i++) {
        int f, t, w;
        cin >> f >> t >> w;
        g[f].push_back(make_pair(t, w));
    }
    int s;
    cout << "Enter the start vertex: ";
    cin >> s;
    for(int i=0; i<n; i++) {
        if(i == s) {
            pq.push(make_pair(0, i));
            mp[i] = 0;
        }
        else {
            pq.push(make_pair(INT16_MAX, i));
            mp[i] = INT16_MAX;
        }
    }
    vector<int> v(n);
    while(!pq.empty()) {
        pair<int, int> temp = pq.top();
        v[temp.second] = 1;
        int w = temp.first;
        int e = temp.second;
        pq.pop();
        for(int i=0; i<g[e].size(); i++) {
            if( v[g[e][i].first]==0 && (w+g[e][i].second < mp[g[e][i].first])) {
                mp[g[e][i].first] = w+g[e][i].second;
                pq.push(make_pair(mp[g[e][i].first], g[e][i].first));
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << i << " " << mp[i] << endl;
    return 0;
}
