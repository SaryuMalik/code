#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[3][3] = {
    {10,11,12},{20,21,22},{30,31,32}
  };
  int n = 3 ;
  int m = 3 ;
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = 0 ; j < m ; j++)
    {
      cout <<arr[i][j]<<" " ;
    }cout <<endl;
  };
  for (int i = 0  ; i < n ; i++)
  {
    for (int j = i ; j < m ; j++)
    {
      
      swap(arr[i][j] , arr[j][i]);

    }
  }
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = 0 ; j < m ; j++)
    {
      cout <<arr[i][j]<<" " ;
    }cout <<endl;
  }

}
