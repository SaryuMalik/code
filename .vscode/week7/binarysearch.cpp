#include <iostream>
using namespace std ;
int binarySearch(int arr[]  , int s , int e ,int target)
{
  if (s > e)
  return -1 ;
  int mid = s + (e-s)/2 ;
  
    if (arr[mid] == target)
    return mid ;
    else if(arr[mid] < target)
    binarySearch(arr , mid +1 , e , target);
    else 
    binarySearch(arr , s , mid-1 , target );
  
}
int main(){
  int arr[] = {1 ,2  , 3 ,4, 5, 7};
  int size = 6 ;
  int s = 0 ;
  int e = size - 1 ;
  int target = 3 ;
  int ans =  binarySearch( arr , s , e , target) ;
  cout << ans ;

  }