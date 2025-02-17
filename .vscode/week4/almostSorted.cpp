#include <iostream>
#include <vector>
using namespace std ;
int binarySearch(vector<int>arr , int target)
{
  int n = arr.size();
  int s = 0 ;
  int e = n - 1 ;
  int mid = s + (e-s)/2 ;
  while(s<= e)
  {
    if ( target== arr[mid])
    return mid ;
    if(target == arr[mid + 1])
    return mid + 1 ;
    if(target == arr[mid - 1])
    return mid - 1 ;
    else if (target > arr[mid]&& arr[mid+1]&&arr[mid - 1])
    s = mid + 2 ;
    else
    e = mid - 2 ;
    mid = s + (e-s)/2 ;


  }
  return -1 ;
}

int main()
{
  vector<int> arr = {10,3,40,20,50,80,70};
  int target ;
  cin >> target ;
  int ans = binarySearch(arr , target);
  cout << ans ;
}