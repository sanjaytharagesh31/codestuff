#include<iostream>
using namespace std;

int main(){
	int num,i,j,k,a[10],b[10],c;
	for(i=0;i<10;i++)
	b[i]=0;
	cout<<"Program to delete duplicate elements from an array"<<endl;
	cout<<"Number of elements:";
	cin>>num;
	cout<<"Enter the elements one by one:";
	for(i=0;i<num;i++)
	cin>>a[i];
	k=0;
    	
	for(i=0;i<num;i++){
		c=1;
		for(j=0;j<=k;j++){
			if(a[i]==b[j]){
				c=0;
				break;	
			}
		}
		if(c){
			b[k]=a[i];
			k++;		
		}
	}
	
	for(i=0;i<k;i++)
	cout<<b[i]<<" ";
	
	return 0;
}
