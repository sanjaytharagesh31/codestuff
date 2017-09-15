#include<iostream>
using namespace std;

int main(){
    int a, b, c, n;
    a = 0;
    b = 1;
    cin>>n;
    if(n == 1)
        cout<<"0";
    else if(n == 2)
        cout<<"0"<<"1";
    else {
        cout<<"0"<<endl<<"1"<<endl;
        for(int i=3; i<=n; i = i+2){
            a = a+b;
            b = a+b;
            if(i == n){
                if(n%2 == 0)
                    cout<<a<<endl<<b<<endl;
                else
                    cout<<a<<endl;
            }
            else
                cout<<a<<endl<<b<<endl;
        }
    }
    return 0;
}

        
