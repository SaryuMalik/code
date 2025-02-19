#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std ;
int  searchOccurence1(vector<int> &arr)
{
  int n = arr.size() ;
  int sum = 0 ;
  unordered_map<int , int> m ;
  unordered_map<int , int> odd ;
  for (int i = 0 ;  i < n ; i++)
  {
    m[arr[i]]++ ;
  }
  for (auto x : m)
  {
     int number = x.first ;
     int count = x.second ;
     if (count %2 != 0)
     {
        if (odd.find(count) == odd.end() ||  number < odd[count])
        {
          odd[count] = number ;
        }
     }
  }
  for (auto x : odd)
  {
    sum += x.second ;
  }

  return sum ;
}
 
int main() 
{
  vector<int>arr = {1,1,1,2,2,2,2,3,3,3,4,5,5,5,5,5} ;
  int ans = searchOccurence1(arr) ;
  cout << ans ;
}