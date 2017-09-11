#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Number of elements: ";
	cin>>n;
	int arr[n],sum[n];
	cout<<"Enter the elememts one by one:";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	//LOGIC PART
	sum[0] = arr[0];
	for(int i=1; i<n; i++)
		sum[i] = sum[--i] + arr[++i];
	for(int i=0; i<n; i++)
		cout<<sum[i]<<" ";
	return 0;
}
