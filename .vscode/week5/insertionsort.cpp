#include <iostream>
#include <vector>
using namespace std ;
void InsertionSort(vector<int> &arr)
{
  int n  = arr.size();
  for (int i = 1 ; i < n ; i++)
  {
    int key = arr[i];
    int j = i - 1 ;
    while( j >= 0 && arr[j] >  key)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key ;
  }

}

int main(){
 vector<int>arr = {-5 , -2 ,5 , 6 ,-6 , 100};
 
InsertionSort(arr);
   int n = arr.size();
  for (int i = 0 ; i < n ; i++)
  {
    cout <<arr[i]<<" ";
  }
}