#include <iostream>
using namespace std ;
void extremePrinting(int arr[] , int size )
{
  int i = 0 ;
  int j = size -1 ;
  while(i<=j)
  {
    cout << arr[i]<< " ";
    i++;
    if (i< j)
    {
      cout << arr[j]<<" ";
      j--;
    }
  }
}
int main()
{
  int size;
  cin>> size ;
int arr[size];
for (int i = 0 ; i < size ; i++)
{
  cout << "Numbers in array are : ";
  cin>> arr[i];
}

extremePrinting( arr,  size );


}
