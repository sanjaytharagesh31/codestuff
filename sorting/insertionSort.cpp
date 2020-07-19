#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j>0; j--) {
            if(arr[j]<arr[j-1]) {
                int tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
            }
            else {
                break;
            }
        }
    }
}
int main() {
    vector<int> arr{-9,4,3,3,1};
    int n = arr.size();
    insertionSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}