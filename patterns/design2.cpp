#include<iostream>
using namespace std;

int main(){
	int row,space,print;
	cout<<"Enter the number of rows:";
	cin>>row;
	for(int i=1; i<=row; i++){
		for(space=row-i; space!=0; space--)
			cout<<" ";
		for(print=i+(i-1); print!=0; print--)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
} 
	
/* LOGIC:
0001        0   1
00111       1	2
011111      2   3
1111111     3   4

OUTPUT:
    *
   ***
  *****
 *******
*********
              */
