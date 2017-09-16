#include<iostream>
using namespace std;

void towerOfHanoi(char s, char h, char d, int n){
	if(n == 1){
		cout << "Moving " << n << " from " << s << " to " << d << endl;
		return;
	}
	towerOfHanoi(s, d, h, n-1);
	cout << "Moving " << n << " from " << s << " to " << d << endl;
	towerOfHanoi(h, s, d, n-1);
	return;
}
	
	
int main(){
	int n;
	char s = 'A';
	char h = 'B';
	char d = 'C';
	cin >> n;
	towerOfHanoi(s, h, d, n);
	return 0;
}
