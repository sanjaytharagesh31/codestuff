#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,i,j,a[100],count,max;
    i=0;
    max=0;
    count=0;
    cin >> n;
    while(n!=0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	/* for(j=i-1;j>=0;j--)
	cout<<a[j]; */
	
	for(j=0;j<i;j++){
		if(a[j]==1)
			count++;
		else
			count=0;
		if(count>max)
			max=count;
		}
		cout<<max;
	return 0;
}

