#include <iostream>
#include <vector>
using namespace std ;
int singleNumber(vector<int>arr)
{
  int size = arr.size() ;int ans = 0 ;
  for (int i = 0 ; i< size ; i++)
  {
    ans = arr[i]^ ans;
    
  }
    return ans ;
}

int main()
{
  vector<int>arr = {1,2,2,3,4,1,3};
  int ans = singleNumber(arr);
  cout << ans ;
}