#include<iostream>
using namespace std;

int main(){
	int num,arr[50],small,pos,temp;
	cout<<"Number of elements (max 50):";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	for(int i=0;i<num-1;i++){
		small=arr[i];
		pos=i;
		for(int j=i+1;j<num;j++){
			if(arr[j]<small){
				small=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
	}
	
	cout<<"Sorted array:";
	for(int i=0;i<num;i++)
	cout<<arr[i]<<" ";
	return 0;
}
	
		
