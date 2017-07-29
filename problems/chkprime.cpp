#include<iostream>
using namespace std;
//PROGRAM TO CHECK N IS PRIME

int main(){
	int n,c=1;
	cout<<"Enter a number:";
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not Prime";
			c=0;
			break;
		}
	}
	if(c)
		cout<<"Its a prime number";
	j++;
	return 0;
}
		
		
