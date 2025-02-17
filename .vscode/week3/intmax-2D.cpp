#include <iostream>
#include <limits.h>
#include <vector>
using namespace std ;
int  MaxinArray(vector<vector<int>>arr)
{
  int rowSize = arr.size();
  int colSize = arr[0].size();
  int max = INT_MIN;
  for (int i = 0 ; i < rowSize ; i++)
  {
    for (int j = 0 ; j < colSize ; j++)
    {
      if (arr[i][j] > max)
      {
         max = arr[i][j];
      }
      
      }
  }
  return max;
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 11, 6},
        {7, 8, 9}
    };
    int ans = MaxinArray(arr);
    cout << ans ;
}

    