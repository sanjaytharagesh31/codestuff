#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;

int main(){
	ofstream fout("fil.txt",ios::out);
	fout<<"Hi! this is a file"<<endl;
	fout<<"created by a developer"<<endl;
	fout<<"the end..";
		
	char ch;
	int vow=0,space=0,cha=0,line=0;
	ifstream fin("file.txt",ios::in);
	while(!fin.eof()){
		ch=fin.get();
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
		vow++;
		if(ch==' ')
		space++;
		if(isalpha(ch))
		cha++;
		if(ch=='\n')
		line++;
	}
	
	cout<<"vowels"<<vow;
	cout<<"words"<<space+1;
	cout<<"letters"<<cha;
	cout<<"lines:="<<line+1;
	fin.close();
	return 0;
}
		
		
	

