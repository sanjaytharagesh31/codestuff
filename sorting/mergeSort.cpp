#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int l, int h) {
    if(l<h) {
        int m = (l+h)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        vector<int> ans;
        unsigned int i=l;
        unsigned int j=m+1;
        while(i<=m && j<=h) {
            if(arr[i] <= arr[j]) {
                ans.push_back(arr[i]);
                i++;
            }
            else {
                ans.push_back(arr[j]);
                j++;
            }
        }
        while(i<=m) {
            ans.push_back(arr[i]);
            i++;
        }
        while(j<=h) {
            ans.push_back(arr[j]);
            j++;
        }
        for(int i=l, ind=0; i<=h; i++) {
            arr[i] = ans[ind++];
        }
    }
}

int main() {
    vector<int> arr{9,5,6,3,4,6,2,4,3,1,8,9};
    int n = arr.size();
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}




/* Better Version */
#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr, int l, int h) {
    if(l<h) {
        int m = (l+h)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, h);
        vector<int> aux(arr);
        unsigned int i=l;
        unsigned int j=m+1;
        for(int k=l; k<=h; k++) {
            if(i>m)
                arr[k] = aux[j++];
            else if(j>h)
                arr[k]=aux[i++];
            else if(aux[i] < aux[j])
                arr[k]=aux[i++];
            else
                arr[k]=aux[j++];
        }
    }
}

int main() {
    vector<int> arr{9,5,6,3,4,6,2,4,3,1,8,9};
    int n = arr.size();
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}