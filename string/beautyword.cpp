#include <iostream>

using namespace std;

int main(){
    char w[100];
    int c=1;
    cin >> w;
    // Print 'Yes' if the word is beautiful or 'No' if it is not.
    for(int i=0;w[i]!='\0';i++){
        if(w[i]==w[i+1] || ((w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||w[i]=='y') && (w[i+1]=='a'||w[i+1]=='e'||w[i+1]=='i'||w[i+1]=='o'||w[i+1]=='u'||w[i+1]=='y'))){
            cout<<"No";
            c=0;
            break;
        }
    }
    if(c)
        cout<<"Yes";
    return 0;
}
