#include <iostream>

using namespace std;
// Write the check_leap function below this line
int check_leap(int year){
  if(year%4 == 0){
    if(year%100 == 0){
      if(year%400 == 0){
        return 1;
      }
    }
    else{
      return 1;
    }
  }
  else
    return 0;
}
int main() {
  int input;

  cin >> input;

  if (check_leap(input) == 1)
    cout << "yes";
  else
    cout << "no";

  return 0;
}
