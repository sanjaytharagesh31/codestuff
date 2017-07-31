#include<iostream>
using namespace std;

int main(){
  int t,C,I,P[1000],val,sum=0;
  cin>>t;
  
  for(int i=1; i<=t; i++){
    val=1;
    cin>>C;
    cin>>I;
    for(int j=0; j<I; j++)
      cin>>P[j];
    for(int j=0; j<I-1 && val==1; j++){
      for(int k=j+1; k<I && val==1; k++){
        if(P[j]+P[k]==C){
          cout<<"Case #"<<i<<": "<<j+1<<" "<<k+1<<endl;
          val=0;
        }
      }
    }
  }
  return 0;
}
          
