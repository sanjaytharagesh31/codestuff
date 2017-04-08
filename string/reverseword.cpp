#include<iostream>
#include<string>
using namespace std;
//UNDER CONSTRUCTION
int main(){
	char ch[20],ar[10];
	int b,p,q,i;
	cout<<"Program to reverse the words in a string"<<endl;
	cout<<"Enter a string (end with a space):";
	gets(ch);
	p=0;
	q=0;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]!=' ')
			ar[p++]=ch[i];
		
		else{
			b=p-1;
			while(b>=0){
				ch[q]=ar[b];
				q++;
				b--;
			}
			q++;
			p=0;
		}
	}
	cout<<"Output:";
	for(i=0;ch[i]!='\0';i++)
	cout<<ch[i];
	return 0;
}
				
			
			
