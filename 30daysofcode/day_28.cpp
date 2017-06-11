#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

struct database{
	string fname;
	string email;
};

int main(){
	database user[30],copy[30];
	string temp;
	int N,j=0;
	cin>>N;
	for(int i=0; i<N; i++)
		cin>>user[i].fname>>user[i].email;
	
	for(int i=0; i<N; i++){
		if (user[i].email.substr(user[i].email.length()-10)=="@gmail.com"){
			copy[j].fname=user[i].fname;
			j++;
			
		}
	}
	
	for(int i=0; i<j; i++){
		for(int p=0; p<(j-1); p++){
			if(strcmp(copy[p].fname.c_str(), copy[p+1].fname.c_str())>0){
				temp=copy[p].fname;
				copy[p].fname=copy[p+1].fname;
				copy[p+1].fname=temp;
			}
		}
	}
	for(int i=0; i<j; i++)
		cout<<copy[i].fname<<endl;
	
	return 0;
}
