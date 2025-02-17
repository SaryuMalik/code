//smaller case ko uppr case me krna hai 
//uppercase ko smaller case me krna hai 
#include <iostream>
using namespace std ;
void replaceChar(char arr[] , int size )
{
  for (int i = 0 ; i < size -1 ; i++)
  {
  if (arr[i]== '\0')
  {
    break ;

  }

  
    arr[i] = arr[i]- 'a' + 'A';
}
  cout << arr ;
}

int main(){
  char arr[100];
  int size = 100 ;
  cin.getline(arr , 100);
  replaceChar(arr , size );

}