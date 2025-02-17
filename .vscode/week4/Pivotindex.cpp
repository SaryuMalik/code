#include <iostream>
#include <vector>
using namespace std ;
int PivotIndex(vector<int>arr)
{
  int n = arr.size();
  int s = 0 ;
  int e = n - 1 ;
  int ans = -1 ;
  int mid = s + (e-s)/2;
  while(s <= e )
  {
    if (mid < n - 1 &&arr[mid] > arr[mid + 1])
     return mid ;

    else if (mid > 0 && arr[mid]< arr[mid - 1])
    return mid - 1;       
    else if (arr[s] > arr[mid])
    e = mid - 1 ;
    else
      s = mid + 1 ;

    mid = s + (e - s )/2 ;
  }
 
}

int main()
{
  vector<int> arr = {90,30,50,60,70};
   int ans = PivotIndex(arr);
   cout << ans ;
}



