#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num,factors[100],ind=0;
	cout<<"Enter a number:";
	cin>>num;
	
	while(num%2==0){
		factors[ind++]=2;
		num=num/2;
	}
	
	for(int i=3; i<=sqrt(num); i=i+2){
		while(num%i==0){
			factors[ind++]=i;
			num=num/i;
		}
	}
	
	if(num>2)
		factors[ind++]=num;
	
	for(int i=0; i<ind; i++)
		cout<<factors[i]<<" ";
		
	return 0;
}	
