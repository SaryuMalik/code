#include<iostream>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
using namespace std;
main() {
int  x;
char str[80];
char str1[80];
cout << "Enter a number and a string:\n";
cin >> x;
cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear buffer before taking newline
cin.getline(str,80); //take a string
cin.getline(str1,80);
cout << "You have entered:\n";
cout << x << endl;
  cout << str << endl<<str1;

}
