#include <iostream>
using namespace std ;
void threeSum(int arr[] , int n , int target)
{
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = i+1 ; j <  n ; j++)
    {
      for (int k = j +1 ; j < n ; j++)
      {
        if (arr[i] + arr[j]+ arr[k] == target)
        {
          cout << arr[i] <<","<< arr[j]<<","<<arr[k]<< endl ;
        }
        
      }
    }
  }
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7};
  int size = 10 ; 
  int target = 11 ; 
  threeSum(arr , size , target);

}