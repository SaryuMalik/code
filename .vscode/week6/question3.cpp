#include <iostream>
using namespace std  ;
void reverseChar(char arr[] , int size )
{
  int temp ;
  int count  = 0 ;

  for (int i = 0 ; i < size  ; i++)
  {
  if (arr[i]== '\0')
  {
    break ;

  }
  else 
  {

  count++ ;
  }
  }
  cout <<count<< endl;
 for (int i = 0 ; i < count/2 ; i++)
 {

  
   temp = arr[i] ;
   arr[i] = arr[count -1- i];
   arr[count-1-i] = temp ;
 }


  cout << arr ;
}

int main(){
  char arr[100];
  int size = 100 ;
  cin.getline(arr , 100);
  reverseChar(arr , size );

}