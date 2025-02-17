#include <iostream>
using namespace std ;
bool isPrime(int n)
{
  if (n<= 1)
  {
    return false ;
  }

  for (int i = 2 ; i < n ; i++)
  {
    if (n % i == 0)
    {
      return false ;
    }
  }

  return true ;

}

void checkPrime(int n)
{ 
  if (isPrime(n))
  {
    cout << n <<" is a prime number " ;
  }
  else 
  cout << n <<" is not a prime number ";
}

int  reverseNumber(int n)
{
  int reversedNumber = 0 ;
  int temp = n;
  while(temp > 0){
  int digit = temp % 10 ;
  reversedNumber = reversedNumber * 10 + digit;
  temp = temp/10;
  }
  return reversedNumber;
}

int main()
{
  int n ;
  cin>> n ;
  checkPrime(n);
  int ans = reverseNumber(n);
  checkPrime(ans);
}