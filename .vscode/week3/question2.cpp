#include <iostream>
#include <vector>
using namespace std ;
bool isPrime(int num )
{
  if(num <=1)
  {
    return false;
  } 
  
    for(int i = 2 ; i<num ; i++)
    {
      if(num % i == 0)
      {
        return false ;
      }
    }
    return true ;
}

void printPrimenum()
{
  for (int i = 1 ; i<=20 ; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }cout << endl ;
}
int main()
{

  vector<int>prime;
  printPrimenum();   
}