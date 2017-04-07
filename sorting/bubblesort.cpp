#include<iostream>
using namespace std;

int main(){
	int num,arr[50],temp;
	cout<<"Number of elements:";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	for(int i=0;i<num;i++){
		for(int j=0;j<num-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted arrays is:";
	for(int i=0;i<num;i++)
	cout<<arr[i]<<" ";
	return 0;
}
	
	
		
