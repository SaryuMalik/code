#include <iostream>
using namespace std ;
void checkArray(int arr[] , int size)
{
  int countZero = 0 ;
  int countOne = 0 ;
  for (int i = 0 ; i< size ; i++)
  {
    if ( arr[i]== 0 )
    {
      countZero++;
    }
      else if (arr[i] == 1 )
      {
        countOne++;
      }
  }
  cout << "count of zeros: "<< countZero<< endl;
  cout << "count of ones: " << countOne;
 
}
int main()
{
  int arr[]= {1,2,3,0,0,0,1,2,0,1};
  int size = 15;
  checkArray(arr , size);

}