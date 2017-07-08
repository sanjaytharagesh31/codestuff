#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr;
    int N,temp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
        
    return 0;
}
