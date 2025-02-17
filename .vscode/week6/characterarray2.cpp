#include <iostream>
using namespace std ;
int main() {
  char arr[100];
  // cout << "Please enter your name :";
  // cin >> arr ;
  // cout << "your name : " <<arr ;
  cout << "please enter your name again : " ;
  cin.getline(arr , 100 ,'\t' ) ; 
  cout << "hi" <<arr ;
}