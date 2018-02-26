//cpp program to find the substring in a string by KMP algorithm
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//input text, pattern
	string txt, pat;
	cout << "Enter the text: ";
	cin >> txt;
	cout << "Enter the pattern: ";
	cin >> pat;
	
	//to form check vector
	vector<int> check(pat.length());
	check[0] = 0;
	
	for(int i=1; i<pat.length(); i++) {
		int j = check[i-1];
		while(j>0 && pat[i] != pat[j])
			j = check[j-1];
		if(pat[i] == pat[j])
			j++;
		check[i] = j;
	}
	
	for(int i=0,j=0; i<txt.length(); ) { 
		if(txt[i] == pat[j] && j==pat.length()-1) {
			cout << "pattern found at " << i-j << endl;
			j = check[j-1];
		}
		else if(txt[i] == pat[j] && j != pat.length()-1) {
			j++;
			i++;
		}
		else {
			if(j>0) {
				j = check[j-1];
			}
			else {
				i++;
			}
		}
	}
	
	return 0;
}
