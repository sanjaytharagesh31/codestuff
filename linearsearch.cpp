#include<iostream>
using namespace std;

int main(){
	int num,item,arr[100],c=1;
	cout<<"How many elements are there (max 100):";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	cout<<"Enter the element to search:";
	cin>>item;
	for(int i=0;i<num;i++){
		if(arr[i]==item){
			cout<<item<<" found at "<<i+1<<endl;
			c=0;
		}
	}
	if(c)
	cout<<item<<" not found in the given array";
	return 0;
}
