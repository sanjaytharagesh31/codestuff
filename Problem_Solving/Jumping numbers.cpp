/*
Given a number x, print all the jumping numbers below or equal to x. A number is called a jumping number if for a number all the adjacent digits differ by 1. All single digit numbers are also jumping numbers.
Eg. 432345, 32, 543, 989, 12, 21 are jumping numbers whereas 843, 485, 9348 are not.
*/
bool isJump(int n) {
    int tmp = n;
    int prev = n%10;
    n = n/10;
    while(n > 0) {
        int d = n%10;
        if(abs(prev-d) != 1)
            return false;
        prev = d;
        n = n/10;
    }
    return true;
}

void printjumpingnumbers(int n)
{
	//You don't need to take input
	// Just find the answer and print the output
	for(int i=0; i<=n; i++) {
        if(isJump(i))
            std::cout << i << " ";
    }
}
