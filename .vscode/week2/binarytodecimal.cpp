#include <iostream>
using namespace std ;
int binaryTodecimal(int n)
{
  int decimal = 0 ;
  int base = 1;
  while (n>0)
  {
    int lastdigit = n % 10 ;
    decimal += lastdigit * base ;
    base *=2;
    n/=10;
    
  }
  return decimal;

}
int main()
{
  int n ;
  cout <<" Enter the binary no. : ";
  cin>> n ;
  int result = binaryTodecimal(n);
  cout <<"The decimal value is : "<<result ;
}


// #include <iostream>
// using namespace std ;
// int reverseNumber(int n)
// {
//   int  newnumber = 0 ;

//    while (n>0)
//    {
//     int Digit = n%10;
//     newnumber =  newnumber*10 + Digit;

//     n/=10;
//    }
//    return newnumber ;
// }
// int main()
// {
//   int n ;
//   cin>> n ;
//   int result = reverseNumber(n);
//   cout << result ; 
// }
