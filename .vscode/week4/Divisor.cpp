#include <iostream>
using namespace std ;
int array( int Dividend , int Divisor )
{
  int s = 0 ;
  int e = Dividend ;
  int mid = s + (e -s)/2 ;
  int ans2 = 0 ;
  
  while( s <= e)
  {
    int ans = Divisor * mid ;
     if (ans == Dividend )
     {
        return mid  ;

     }
     else if ( ans < Dividend)
     {
     ans2 = mid ;
     s = mid + 1 ;
     }
     else 
     e = mid - 1 ;

     mid = s + (e-s)/2 ;

  }

  return ans2 ;


}
int main()
{


  int Dividend = 35 ;
  int Divisor = 5 ;
  int ans = array( abs(Dividend ), abs(Divisor));
  if(Dividend < 0 || Divisor < 0)
  {
    ans = 0 - ans ;
  }
  cout << ans ;

}