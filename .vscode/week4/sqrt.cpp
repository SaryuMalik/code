#include <iostream>

using namespace std ;
double   BinarySearch(double n)
{
  double s = 0 ;
  double e = n ;
  double ans1 = 0 ;
   double  mid = s + (e-s)/2 ;
  while ((e - s)>0.000000001)
  {
     double  ans = mid * mid ;
    if (ans <= n)
    {
      ans1 = mid  ;
    
      s = mid  ;
    }
    else 
    {
      e = mid ; 
    }
    mid = s + ( e - s)/2 ;

  }
  return ans1 ;
}
int  main(){
  double n = 37 ;
  double ans = BinarySearch(n);
  cout << ans<<" " ;
}