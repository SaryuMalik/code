#include <iostream>
using namespace std ;
int main()
{
  int n = 4 ; int m = 3 ;
  int arr[4][3]={ {10,20,11},{40,50,60},{70,77,90},{69,68,67} };
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = 0 ; j < m ; j++)
    {
      cout << arr[i][j]<<" ";
    }
    cout << endl ;
  }

}


#include <iostream>
using namespace std ;
int main()
{
  int n = 4;
  int m = 4;
  int arr[n][m]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  // for (int j= 0 ; j < m ; j++)
  // {
  //   for (int i = 0 ; i < n ; i++)
  //   {
  //     cout << arr[i][j]<<" ";
  //   }cout <<endl ;
  // }
for (int i = 0 ; i < n ; i++)
{
  for (int j = 0 ; j < n ; j++)
  {
    cout <<arr[i][j]<<" ";
  }cout <<endl;
}
  for (int i = 0 ; i < n ; i++)
  {
    cout <<arr[i][(n-i)-1]<<" ";
  }
}