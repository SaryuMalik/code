#include <iostream>
using namespace std ;
int power(int n)
{
  int value = 3;
  if (n == 0)
  return 1 ;
  int ans = value * power(n-1);
  return ans ;
}
int main()
{
  int n ;
  cin>> n ;
  int ans = power(n);
  cout << ans ;
}