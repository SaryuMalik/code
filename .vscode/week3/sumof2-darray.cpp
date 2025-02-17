#include <iostream>
#include <vector>
using namespace std ;
int main()
{
  vector<vector<int>>nums(4,vector<int>(4));
  nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int rowSize = nums.size();
  int colSize = nums[0].size();
  int sum = 0 ;
  for (int i = 0 ; i < rowSize ; i++)
  {
    
    sum += nums[i][(rowSize-i)-1];
  }
  cout << sum ;
  
  // for (int i = 0 ; i < rowSize ; i++)
  // {
  //   int sum = 0 ;
  //   for (int j = 0 ; j < colSize ; j++)
  //   { 
  //      sum +=  nums[i][j];
  //   }
  //   cout << sum <<" " ;
  // }
  // //cout << sum <<" " ;
}

