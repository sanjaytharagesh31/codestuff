#include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n, int digit) {
	int count[10] = {};
	int d = pow(10, digit);
	for(int i=0; i<n; i++)
		count[(arr[i]/d)%10]++;

	for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
	
	int result[n];
	for(int i=n-1; i>=0; i--) {
		result[count[(arr[i]/d)%10]-1] = arr[i];
		count[(arr[i]/d)%10]--;
	}
	for(int i=0; i<n; i++) {
		arr[i] = result[i];
	}
	return;
}
void radix_sort(int arr[], int n) {
	int max = arr[0];
	for(int i=1; i<n; i++) {
		if(arr[i] > max)
			max = arr[i];
	}
	int cnt = max==0 ? 1 : 0 ;
	while(max>0) {
		cnt++;
		max /= 10;
	}
	for(int i=0; i<cnt; i++) {
		count_sort(arr, n, i);
	}
	return;
}

int main() {
	int n;
	cout << "Number of elements: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements one by one" << endl;
	for(int i=0; i<n; i++) 
		cin >> arr[i];
	radix_sort(arr, n);
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	return 0;
}
	
