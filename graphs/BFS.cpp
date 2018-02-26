#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int nodes, vertices, a, b;
	cout << "Number of node: ";
	cin >> nodes;
	cout << "Number of vertices: ";
	cin >> vertices;
	
	vector<int> graph[nodes];
	vector<int> visited(nodes);
	vector<int> level(nodes);
	vector<int> parent(nodes);
	queue<int> q;
	for(int i=0; i<nodes; i++)
		visited[i] = 0;
		
	cout << "Enter the vertices that are connected by a edge" << endl;
	for(int i=0; i<vertices; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	//root = 0
	visited[0] = 1;
	level[0] = 0;
	parent[0] = 0;
	q.push(0);
	cout << "0" << endl;
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		for(int i=0; i<graph[cur].size(); i++) {
			if(visited[graph[cur][i]] != 1) {
				visited[graph[cur][i]] = 1;
				level[graph[cur][i]] = level[cur]+1;
				parent[graph[cur][i]] = cur;
				q.push(graph[cur][i]);
				cout << graph[cur][i] << endl;
			}
		}
	}
	for(int i=0; i<nodes; i++) {
		cout << "NODE: " << i << endl;
		cout << "Level :" << level[i] << endl;
		cout << "Parent :" << parent[i] << endl;
		cout << endl;
	}
	return 0;
}
