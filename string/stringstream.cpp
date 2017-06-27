#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> final;
    int temp1;
    char temp2;
    while(ss>>temp1){
        final.push_back(temp1);
        ss>>temp2;
    }
    return final;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
/* Sample Input

23,4,56

Sample Output

23
4
56
 
 */
