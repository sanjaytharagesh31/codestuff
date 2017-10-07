#include<iostream>
using namespace std;

void pattern1(int n){ // to print * linearly
	if(n > 1)
		pattern1(n-1);
	cout<<"*";
	return;
}	

bool search(int target, int arr[], int first, int last){ //binary search return 1 if element is present
	if(first > last)
		return false;
	else{
		int mid = (first+last)/2;
		if(arr[mid] == target)
			return true;
		else if(target > arr[mid])
			return search(target, arr, mid+1, last);
		else 
			return search(target, arr, first, mid-1);
		}
}
			
int binocoeff(int n, int r){ // to calculate binomial coefficient
	if(r==0)
		return 1;
	if(r==n)
		return 1;
	else
		return binocoeff(n-1, r) + binocoeff(n-1, r-1);
}
	
int fib(int n) { // to reurn the nth element in the fibinocci series
	if(n == 0 || n == 1)
		return 1;
	return fib(n-1) + fib(n-2);
	} 
	
int largest(int arr[], int n) { // to find the largest element in a given array (where n = size -1)
	if(n == 0)
		return arr[n];
	return max(arr[n], largest(arr, n-1));
	}
	
	
int main(){
	pattern1(10);
	cout<<endl;
	int arr[] = {1,2,3,4,5,6,7,8,9,67,69};
	cout<<search(67, arr, 0, 11-1)<<endl;
	cout<<binocoeff(5, 2)<<endl;
	cout<<fib(5)<<endl;
	cout<<largest(arr, 11-1)<<endl;
	return 0;
}
