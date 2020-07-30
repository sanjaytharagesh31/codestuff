#include <bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> arr) {
    int n = arr.size();
    int mx = *max_element(arr.begin(), arr.end());
    vector<int> count(mx+1, 0);
    vector<int> output(n);
    for(int x : arr)
        count[x]++;
    for(int i=1; i<=mx; i++)
        count[i] += count[i-1];
    for(int i=0; i<n;  i++)
        output[--count[arr[i]]] = arr[i];
    return output;
}

int main() {
    vector<int> arr = {1, 1, 1, 2, 7, 5, 2};
    vector<int> tmp = countSort(arr);
    for(int x : tmp)
        cout << x << " ";
    return 0;
}
