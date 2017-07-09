#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter a number to find the prime numbers below that:";
	cin>>n;
	int store[n];
	for(int i=2,j=0; i<=n; i++)
		store[j++]=i;
	for(int i=2; i<=sqrt(n); i++){
		for(int p=i*i,m=2; p<=n; p=i*m++){
			for(int l=0; l<n; l++){
				if(store[l]==p)
					store[l]=0;
			}
		}
		
	}
	for(int i=0; i<n; i++){
		if(store[i]!=0)
			cout<<store[i]<<endl;
		}
		return  0;
}
