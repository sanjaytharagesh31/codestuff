#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0)
		return 1;
	int smallAnswer = fact(n-1);
	return n * smallAnswer;
}
int main(){
	long long int n = 10;
	cout << fact(n) <<endl;
	return 0;
}
