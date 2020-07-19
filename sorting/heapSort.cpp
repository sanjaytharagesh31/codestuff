//Heap Sort

#include <bits/stdc++.h>
using namespace std;

void downHeap(vector<int> &v, int p, int n) {
    while(p < n) {
        int l = 2*p+1;
        int r = 2*p+2;
        int tmp = -1;
        if(l<n && v[l]<v[p]) {
            swap(v[p], v[l]);
            tmp = l;
        }
        if(r<n && v[r]<v[p]) {
            swap(v[p], v[r]);
            tmp = r;
        }
        if(tmp == -1)
            break;
        else
            p = tmp;
    }
}

void constructHeap(vector<int> &v, int n) {
    for(int i=(n/2-1); i>=0; i--)
        downHeap(v, i, n);
}

void heapSort(vector<int> &v, int n) { //inplace
    for(int i=n-1; i>=0; i--) {
        swap(v[0], v[i]);
        downHeap(v, 0, i);
    }
}
void printHeap(vector<int> v) {
    for(int x : v)
        cout << x << " " ;
    cout << endl;
}
int main() {
   vector<int> v{9,1,6,4,5,8,24,78,12,4};
   int n = v.size();
   constructHeap(v, n);
   printHeap(v);
   heapSort(v, n);
   printHeap(v);
   return 0;
}