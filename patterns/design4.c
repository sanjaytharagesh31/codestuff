#include <stdio.h>
int main() {
	int n, s;
	scanf("%d", &n);
	s = n-1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=s; j++) {
			printf(" ");
		}
		s--;
		for(int j=1; j<=i; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

/*
 
 
 7
      1 
     2 2 
    3 3 3 
   4 4 4 4 
  5 5 5 5 5 
 6 6 6 6 6 6 
7 7 7 7 7 7 7 


*/

