#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//DFS implementation

bool vis[1000] = {false};
int count = 0; //for DFS Numbering
vector<int> pre(1000); //pre numbering
vector<int> pos(1000); //pos numbering

void DFS_recur(vector<int> graph[], int source) {
	vis[source] = true;
	cout << source << endl;
	pre[source] = count; count++;
	for(int j=0; j<graph[source].size(); j++) {
		if(vis[graph[source][j]] != true) {
			vis[graph[source][j]] = true;
			DFS_recur(graph, graph[source][j]);
			pos[source] = count; count++;
		}
	}
}
	
	
	
int main() {
	int nodes, edges;
	cout << "Number of nodes: ";
	cin >> nodes;
	cout << "Number of edges: ";
	cin >> edges;
	
	vector<int> graph[nodes];
	
	cout << "Enter the vertices that are connected with a edge" << endl; //Nodes start from 0
	for(int i=0; i<edges; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y); //MARK THE EDGES
		graph[y].push_back(x);
	}
	
	
	//DFS algo using recursion
	int source = 0;
	DFS_recur(graph, source);
	
	cout << endl;
	for(int i=0; i<nodes; i++) {
		cout << i << endl;
		cout << "pre: " << pre[i] << endl;
		cout << "pos: " << pos[i] << endl;
		cout << endl;
	}
	return 0;
}
