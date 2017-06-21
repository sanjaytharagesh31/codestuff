#include<iostream>
using namespace std;

int main(){
	cout<<"Triangle pattern printing"<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}	
	
/*OUTPUT	
	*
	**
	***
	****
	*****
	******
	*******
	********
	*********
	**********   
	*/
