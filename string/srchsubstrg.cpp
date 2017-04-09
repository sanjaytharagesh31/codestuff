#include<iostream>
using namespace std;
 
int main(){
	char ch[50],ss[10];
	int i,j,k,c,len;
	cout<<"Program to find the position of given substring"<<endl;
	cout<<"Enter a string:";
	cin>>ch;
	cout<<"Enter a substring:";
	cin>>ss;
	c=0;
	for(len=0;ss[len]!='\0';len++);
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]==ss[0]){
			j=i;
			k=0;
			while(ss[k]!='\0' && ch[j]!='\0'){
				if(ch[j]!=ss[k])
					break;
				j++;
				k++;
			}
			if(len==j-i){
				c=1;
				break;
			}
		}
	}
	
	if(c)
		cout<<"Found at position at "<<i+1;
	else
		cout<<"Substring not found";
	return 0;
}	
	
			
				
