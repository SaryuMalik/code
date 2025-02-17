#include <iostream>
using namespace std ; 
void reverseArray(int arr[] , int n )
{
  int i = 0 ;
  int j = n-1 ;
  while (j > i)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j]= temp;
    i++;
    j--;
  }
  cout << "Reversed array : ";
  for (int i = 0 ; i<n ; i++)
  {
    cout << arr[i]<<" ";
  }


}
int main()
{
  int size ;
  cout << "The Size of the Array is : ";
  cin>> size ;

  int arr[size];
  for (int i = 0 ; i < size ; i++)
  {
    cout << "The member of the Array are : ";
    cin>> arr[i];
  }
  cout << "Original Array : ";
  for (int i = 0 ; i< size ; i++)
  {
    cout << arr[i]<<" ";
  }
  cout << endl ;
  
  reverseArray(arr , size);

}

