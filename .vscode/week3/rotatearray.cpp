#include <iostream>
using namespace std ;
void rotateArray(int arr[] , int n , int shift)
{
  int finalshift = shift % n ;
  int temp[25];
  int index = 0;
  for (int i = n - finalshift ; i < n ; i++ )
  {
      temp[index]= arr[i];
      index ++;
  }

  for (int i = n - 1 ; i >= 0 ; i--)
  {
    arr[i] = arr[i - finalshift];

  }
  for (int i = 0 ; i < finalshift ; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int arr[]= {1,2,3,4,5,6,7};
  int size = 7;
  int shift ;
  cout << "value of shift : ";
  cin>> shift ;
  rotateArray(arr , size , shift);
  for (int i = 0 ; i < size  ; i++)
  {
    cout << arr[i]<<" ";
  }
  
}