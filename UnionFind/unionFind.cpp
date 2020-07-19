#include <bits/stdc++.h>
using namespace std;

class QFUF {  //Quick Find Union Find
	private:
		vector<int> v;
		int n;
	public:
		QFUF(int N) {
			n = N;
			v = vector<int>(N);
			for(int i=0; i<N; i++) 
				v[i] = i;
		}
		bool find(int p, int q) {
			return v[p] == v[q];
		}
		void union_(int p, int q) {
			int a = v[p];
			int b = v[q];
			for(int i=0; i<n; i++) {
				if(v[i] == a)
					v[i] = b;
			}
		}
		void printSet() {
			for(int i=0; i<n; i++) 
				cout << v[i] << " ";
			cout << endl;
			for(int i=0; i<n; i++)
				cout << i << " ";
			cout << endl;
		}
};

class QUUF {  //Quick Union Union Find
	private:
		vector<int> v;
		int n;
		int root(int p) {
			while(v[p] != p)
				p = v[p];
			return p;
		}
	public:
		QUUF(int N) {
			n = N;
			v = vector<int>(N);
			for(int i=0; i<N; i++) 
				v[i] = i;
		}
		bool find(int p, int q) {
			return root(p) == root(q);
		}
		void union_(int p, int q) {
			int a = root(p);
			int b = root(q);
			v[a] = b;
		}
		void printSet() {
			for(int i=0; i<n; i++) 
				cout << v[i] << " ";
			cout << endl;
			for(int i=0; i<n; i++)
				cout << i << " ";
			cout << endl;
		}
};

class WQUUF {  //Weighted Quick Union Union Find
	private:
		vector<int> v;
		vector<int> sz;
		int n;
		int root(int p) {
			while(v[p] != p)
				p = v[p];
			return p;
		}
	public:
		WQUUF(int N) {
			n = N;
			v = vector<int>(N);
			sz = vector<int>(N);
			for(int i=0; i<N; i++) {
				v[i] = i;
				sz[i] = 1;
			}
		}
		bool find(int p, int q) {
			return root(p) == root(q);
		}
		void union_(int p, int q) {
			int a = root(p);
			int b = root(q);
			if(sz[a] > sz[b]){
				v[b] = a;
				sz[a] += sz[b];
			}
			else{
				v[a] = b;
				sz[b] += sz[a];
			}
			
		}
		void printSet() {
			for(int i=0; i<n; i++) 
				cout << v[i] << " ";
			cout << endl;
			for(int i=0; i<n; i++)
				cout << i << " ";
			cout << endl;
		}
};

class PCQUUF {  //Path Compression Quick Union Union Find
	private:
		vector<int> v;
		int n;
		int root(int p) {
			while(v[p] != p) {
				v[p] = v[v[p]];
				p = v[p];
			}
			return p;
		}
	public:
		PCQUUF(int N) {
			n = N;
			v = vector<int>(N);
			for(int i=0; i<N; i++) 
				v[i] = i;
		}
		bool find(int p, int q) {
			return root(p) == root(q);
		}
		void union_(int p, int q) {
			int a = root(p);
			int b = root(q);
			v[a] = b;
		}
		void printSet() {
			for(int i=0; i<n; i++) 
				cout << v[i] << " ";
			cout << endl;
			for(int i=0; i<n; i++)
				cout << i << " ";
			cout << endl;
		}
};

class PCWQUUF {  //Path Compression Weighted Quick Union Union Find
	private:
		vector<int> v;
		vector<int> sz;
		int n;
		int root(int p) {
			while(v[p] != p){
				v[p] = v[v[p]]; // this line does the job (halves the path)
				p = v[p];
			}
			return p;
		}
	public:
		PCWQUUF(int N) {
			n = N;
			v = vector<int>(N);
			sz = vector<int>(N);
			for(int i=0; i<N; i++) {
				v[i] = i;
				sz[i] = 1;
			}
		}
		bool find(int p, int q) {
			return root(p) == root(q);
		}
		void union_(int p, int q) {
			int a = root(p);
			int b = root(q);
			if(sz[a] > sz[b]){
				v[b] = a;
				sz[a] += sz[b];
			}
			else{
				v[a] = b;
				sz[b] += sz[a];
			}
			
		}
		void printSet() {
			for(int i=0; i<n; i++) 
				cout << v[i] << " ";
			cout << endl;
			for(int i=0; i<n; i++)
				cout << i << " ";
			cout << endl;
		}
};

int main() {
	PCQUUF obj1(10);
	obj1.union_(1,2);
	obj1.union_(3,4);
	obj1.union_(1,4);
	obj1.printSet();
	cout << obj1.find(1, 2);
	cout << obj1.find(1,4);
	cout << obj1.find(4,6);
	return 0;
}
