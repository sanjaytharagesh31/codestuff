//quick Sort

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l, int h) {
    int pivot = h;
    int index = l-1;
    for(int i=l; i<h; i++) {
        if(arr[i] <= arr[pivot]) {
            index++;
            swap(arr[index], arr[i]);
        }
    }
    swap(arr[index+1], arr[h]);
    return index+1;
    
}

void quickSort(vector<int> &arr, int l, int h) {
    if(l < h) {
        int p = partition(arr, l, h);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, h);
    }
}

int main() {
    vector<int> arr= {9,3,23,543,54,657,658,32,33,4,45,5756,757,8,654,324,3214,46,4658};
    // vector<int> arr = {9};
    quickSort(arr, 0, arr.size()-1);
    for(int x : arr)
        cout << x << " " ;
    return 0;
}
