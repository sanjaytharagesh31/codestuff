#include<iostream>
using namespace std;
int main(){
  int num, res=1;
  cin>>num;
  while(num > 0){
    res = res * num--;
  }
  
  cout<<res;
  return 0;
}
