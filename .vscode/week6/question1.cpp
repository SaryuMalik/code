//jhan jhan "&" hai vhn vhn " " space lgado 
#include <iostream>
using namespace std ;
void replaceChar(char arr[] , int size , char oldChar , char newChar)
{
  for (int i = 0 ; i < size ; i++)
  {
    if (arr[i] == oldChar)
    {
      arr[i]  = newChar ;
    }

  }
  cout << arr ;
}

int main(){
  char arr[100];
  int size = 100 ;
  cin.getline(arr , 100);
  char oldChar = '&';
  char newChar = ' ';
  replaceChar(arr , size , oldChar , newChar);

}