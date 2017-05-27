#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n[30],s,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n[i];
    }
    for(int i=0;i<t;i++){
        if(n[i]==1){
            cout<<"Not prime"<<endl;
            continue;
        }
        s=sqrt(n[i]);
        c=1;
        for(int j=2;j<=s;j++) {
            if(n[i]%j==0){ 
                cout<<"Not prime"<<endl;
                c--;
                break;
            }
        }
        if(c){
            cout<<"Prime"<<endl;
            
        }
    }
    return 0;
}
