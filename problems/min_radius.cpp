#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

struct point{
	int x,y;
};

int main(){
	int n,k;
	cout<<"Min No of points:";
	cin>>k;
	cout<<"Total No of points:";
	cin>>n;
	float rad[n];
	point obj[n];
	cout<<"Enter the points:";
	for(int i=0; i<n; i++){
		cin>>obj[i].x>>obj[i].y;
		rad[i] = sqrt(pow(obj[i].x,2)+pow(obj[i].y,2));
	}
	sort(rad, rad+n);
	cout<<rad[k-1];
	return 0;
}
