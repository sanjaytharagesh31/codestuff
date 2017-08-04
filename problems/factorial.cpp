#include<iostream>
using namespace std;
int main(){
  int num;
  long long res=1;
  cin>>num;
  if(num==0)
    cout<<"0"<<endl;
  else{
      while(num > 0)
        res = res * num--;
        cout<<res<<endl;
  }
  return 0;
}
