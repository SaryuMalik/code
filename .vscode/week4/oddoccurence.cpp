#include <iostream>
#include <vector>
using namespace std ;
int binarySearch(vector<int>arr)
{
  int n = arr.size();
  int s = 0 ;
  int e = n  - 1 ;
  int mid = s + (e - s)/2 ;
  while(s <= e)
  {
   if (s==e)
   {
    return s;
   }
  if ( mid-1 >= 0 &&arr[mid] != arr[mid - 1] && mid + 1 <= n - 1 && arr[mid] != arr[mid+1])
  return mid ;
  //agar jo dublicate  occurence left index pe hai to
  if(mid-1 >= 0 && arr[mid]== arr[mid - 1])
  {
    int PairOccurence = mid - 1 ;
    if (PairOccurence & 1)
      e = mid - 1 ;
    else 
    s = mid + 1 ;
  }
  //agar jo mera Pair occurence  right me ho 
  else if (mid + 1 <= n-1 && arr[mid] == arr[mid+1])
  {
    int PairOccurence = mid ;
    if (PairOccurence & 1)
    e = mid - 1 ;
    else 
    s = mid + 1 ;
  }
  mid = s + (e-s)/2 ;
}
return -1 ;
}
int main()
{
  vector<int>arr = {1,1,2,2,3};
  int ans = binarySearch(arr);
  cout << ans ;

}