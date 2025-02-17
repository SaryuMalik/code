#include <iostream>
using namespace std ;
int  fabinocci(int n){    
  if (n == 0 || n == 1 )
  return n ;
  int ans = fabinocci(n-1) + fabinocci (n-2);

  return ans ;
}
int main(){
  int n ;
  cin >> n ;
  int ans = fabinocci(n);
  cout << ans ;
}