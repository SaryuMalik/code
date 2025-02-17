// #include <iostream>
// #include <vector>
// using namespace std ;
// void bubbleSort(vector<int>&arr)
// {
//   int n = arr.size() ;
//   for (int i = 0 ; i < n ; i++)
//   {
//     for (int j = 0 ; j < (n-i)-1 ; j++)
//     {
//       if(arr[j] > arr[j+1])
//       swap(arr[j] , arr[j+1]);

//     }
//   }
// }
// int main(){
//   vector<int>v = {-5 , -2 ,5 , 6 ,-6 , 100};
  
//   bubbleSort(v);
//   int n = v.size();
//   for (int i = 0 ; i < n ; i++)
//   {
//      cout << v[i]<<" ";
//   }
// }
#include <iostream>
#include <vector>
using namespace std ;
void BinarySearch(vector<int> &arr)
{
  int n = arr.size() ;
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = 0 ; j < (n-i)-1 ; j++)
    {
        if (arr[j] > arr[j+1])
        {
          swap(arr[j] , arr[j+1]);
        }
    }
  }

}
int main(){
  vector<int>arr = {-5 , -2 ,5 , 6 ,-6 , 100};
 
  BinarySearch(arr);
   int n = arr.size();
  for (int i = 0 ; i < n ; i++)
  {
    cout <<arr[i]<<" ";
  }
}