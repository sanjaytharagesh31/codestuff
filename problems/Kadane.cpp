#include<iostream>
using namespace std;

int main() {
    int n,sum=0,max_sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    //sum = arr[0];
    //max_sum = arr[0];
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
        if(sum < 0)
            sum = 0;
        if(sum > max_sum)
            max_sum = sum;
    }
    cout<<max_sum;
    return 0;
}

