#include <iostream>
using namespace std ;
void solve (int arr1[] , int size1)
{
  arr1[1] = {50} ; 

}
int main()
{
  int arr[] = {10,20,30};
  int size = 3 ;
  solve(arr,size);
  for (int i = 0 ; i<3 ; i++)
  {
    cout << arr[i]<<" ";
  }

}

