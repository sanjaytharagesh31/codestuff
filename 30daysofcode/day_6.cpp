#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct name{
	char str[20000];
}obj[10];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin>>T;
	for(int i=0; i<T; i++)
		cin>>obj[i].str;
	for(int i=0; i<T; i++){
		for(int j=0; obj[i].str[j]!='\0'; j=j+2)
			cout<<obj[i].str[j];
		cout<<" ";
		for(int j=1; obj[i].str[j]!='\0'; j=j+2)
			cout<<obj[i].str[j];
		cout<<endl;
	}
    return 0;
}

