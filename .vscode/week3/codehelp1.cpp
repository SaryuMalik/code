 #include <iostream>
using namespace std ;
int main()
{
  int arr[6]={1,2,-3,4,-5,6};
  int size = 6 ;
  int i = 0 ;
  int j = 0 ;
  int k = size - 1 ;
  while(i < k)
   {
    if (arr[i]<0)
    {
      swap(arr[i],arr[j]);
      i++;
      j++;      
       }
    else 
    {
      swap(arr[i] , arr[k]);
      k--;
    }
    }
  for (int i = 0 ; i < size ; i++)
   {
    cout << arr[i]<<" ";
   }
}