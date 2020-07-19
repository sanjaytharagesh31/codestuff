#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        int mn = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[mn])
                mn = j;
        }
        int tmp = arr[i];
        arr[i] = arr[mn];
        arr[mn] = tmp;
    }
}
int main() {
    vector<int> arr{9,4,3,3,1};
    int n = arr.size();
    selectionSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}