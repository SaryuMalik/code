#include <iostream>
using namespace std ;
int main()
{
  char grade ;
  cout << "Enter the grade : "<< endl;
  cin >>grade ;
  switch(grade){
    case 'A' : cout << "your marks range is 91 - 100";
    break;
    case 'B' : cout << "your marks range is 81 - 90";
    break;
    case 'C' : cout << "yout marks range is 71 - 80";
    break;
    default: cout << " your marks range is 0 - 70";


  }
}