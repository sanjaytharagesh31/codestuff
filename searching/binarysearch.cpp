#include<iostream>
using namespace std;

int main(){
	int num,item,arr[100],beg,end,mid,c=1;
	cout<<"How many elements are there (max 100):";
	cin>>num;
	beg=0;
	end=num-1;
	cout<<"Enter the elements one by one:";
	for(int i=0;i<num;i++)
	cin>>arr[i];
	cout<<"Enter the element to search:";
	cin>>item;
	while(beg<=end){
		mid=(beg+end)/2;
		if(item<arr[mid])
		end=mid-1;
		else if(item==arr[mid]){
			cout<<item<<" found at "<<mid+1<<endl;
			c=0;
			break;
		}
		else
		beg=mid+1;
	}
	if(c)
		cout<<item<<" not found in the given array";
	return 0;
}
