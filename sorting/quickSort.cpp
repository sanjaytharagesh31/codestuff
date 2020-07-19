//quick Sort

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int l, int h) {
    int pivot = l;
    int i=l+1;
    int j=h;
    while(true) {
        while(arr[i]<=arr[pivot]) {
            i++;
        }
        while(arr[j]>arr[pivot]) {
            j--;
        }
        if(i>j) {
            int tmp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = tmp;
            return j;
        }
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void quickSort(vector<int> &arr, int l, int h) {
    if(l<h){
        int p = partition(arr, l, h);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, h);
    }
}

int main() {
    vector<int> arr{1,4,2,3,56,3,-5,0,0,4,4,56,90};
    int n = arr.size();
    quickSort(arr, 0, n-1);
    for(int x : arr)
        cout << x << " ";
    return 0;
}