#include<iostream>
using namespace std;

int main(){
	int num,arr[50],temp, swap = 1;
	cout<<"Number of elements:";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	for(int i=0;i<num && swap == 1;i++){
		for(int j=0;j<num-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap = 0;
			}
		}
		swap = swap == 0 ? 1 : 0;
		cout<<"After pass #" << i +1 << endl;
		for(int i=0;i<num;i++)
			cout<<arr[i]<<" ";
		cout << endl;
	}
	cout<<"Sorted arrays is:";
	for(int i=0;i<num;i++)
		cout<<arr[i]<<" ";
	return 0;
}
	
	
		
