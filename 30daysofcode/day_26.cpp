#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int ed,em,ey;
    int d,m,y;
    int fine;
    cin>>d>>m>>y;
    cin>>ed>>em>>ey;
    
    if(y>ey){
        fine=10000;
    }
    
    else if(y==ey){
        if(m<em || (m==em && d<ed)){
            fine=0;
        }
        else if(m>em){
            fine=500*(m-em);
        }
        else {
            fine=15*(d-ed);
        }
    }
   
    else{
        fine=0;
    }
    
    cout<<fine;
    
    return 0;
}
