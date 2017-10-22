#include<iostream>
#include<fstream>
using namespace std;

int main() {
	long int a0, a1, a2, n, answer;
	ifstream fin("input.txt");
	fin>>a0>>a1>>a2>>n;
	ofstream fout("output.txt");
	if(n==0)
		fout<<a0;
	else if(n==1)
		fout<<a1;
	else if(n==2)
		fout<<a2;
	else {
		answer = 0;
		for(int i=3; i<=n; i++) {
			answer = a2 + a1 - a0;
			a0 = a1;
			a1 = a2;
			a2 = answer;
		}
		fout<<answer;
	}
	return 0;
}
