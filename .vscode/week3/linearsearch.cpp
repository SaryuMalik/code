#include <iostream>
using namespace std ;
bool findTarget(int arr[] , int size , int target)
{
  for (int i = 0 ; i < size ; i++)
  {
  if (arr[i] == target )
  {
    return true ;
  }
  }
  return false ;
}
int main()
{
  int arr[] = {10,20,30,40};
  int size = 4 ;
  int target = 35 ;
  bool ans = findTarget(arr , size , target);
  cout << ans ; 
}