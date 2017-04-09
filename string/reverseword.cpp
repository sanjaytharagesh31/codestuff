#include<iostream>
#include<string>
using namespace std;
//UNDER CONSTRUCTION
int main(){
	char ch[20],ar[10];
	int p,q,i;
	cout<<"Program to reverse the words in a string"<<endl;
	cout<<"Enter a string (end with a space):";
	cin.getline(ch,20);
	p=-1;
	q=0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]!=' ')
			ar[++p]=ch[i];
		
		else{
			while(p>=0){
				ch[q]=ar[p];
				q++;
				p--;
			}
			q++;
		}
	}
	cout<<"Output:";
	for(i=0;ch[i]!='\0';i++)
	cout<<ch[i];
	return 0;
}
