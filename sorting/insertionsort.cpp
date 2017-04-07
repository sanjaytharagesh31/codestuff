#include<iostream>
using namespace std;

int main(){
	int num,arr[50],temp,j;
	cout<<"Number of elements:";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	for(int i=1;i<num;i++){
		temp=arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"Sorted arrays is:";
	for(int i=0;i<num;i++)
	cout<<arr[i]<<" ";
	return 0;
}
