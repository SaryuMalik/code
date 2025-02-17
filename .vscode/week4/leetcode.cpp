#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;
void Saryu(vector<int> arr , int target )
{
  int n = arr.size() ;
  
  
  sort(arr.begin() , arr.end());

  int i = 0 ;
  int j =  1 ;
  int count = 0 ;
  while( j < arr.size())
  {
    int diff = arr[j] - arr[i];
    if (diff == target)
    {
      count++ ;
      i++ ;
      j++;
    }
    else if ( diff > target)
    {
      i++;
    }
    else 
    {
      j++;
    }
    if (i == j )
    {
      j++ ;
    }

  }
  cout << count ;
}

int main (){
  vector<int>arr = {1,3 ,1 , 5,4};
  int target = 0 ;
  Saryu(arr , target);

}