#include <bits/stdc++.h>
using namespace std ;
int  maxCheck(int arr[] , int size)
{
  for (int i = 0 ; i< size ; i++)
  {
    cout << "Enter the value of array: ";
    cin>> arr[i];
  }
  int maxNumber = INT_MIN;
  for (int i = 0 ; i< size ; i++)
  {
    if (arr[i]> maxNumber )
    {
      maxNumber = arr[i];
    }
  }
    
   return maxNumber;   
}

int main()
{
   int size;
  int arr[size];
  
  cout << "Enter the value of size of array : "<<" ";
  cin>> size ;
  int ans = maxCheck(arr , size);
  cout<<"The maximum number in the array is : " << ans ;
}