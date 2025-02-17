//printing counting of numbers
// #include <iostream>
// using namespace std ;
// void printcounting()
// {
//   for (int i = 1 ; i<=5 ; i++)
//   {
//     cout << i<<" ";
//   }cout << endl;

// }

// int main()
// {
//   printcounting();
//   printcounting();
// }

// //adding of two numbers 
// #include <iostream>
// using namespace std ;
// int sum(int a , int b )
// {
//   int add = a + b ;
//   return add ;
// }
// int main()
// {
//   int ans = sum(5,6);
//   cout << ans << endl ;
// }

//multiplication of three numbers
// #include <iostream>
// using namespace std ;
// int multiply(int a , int b , int c )
// {
//   int firstans = a*b*c;
//   return firstans;
// }
// int main()
// {
//   int ans = multiply(5,4,3);
//   cout << ans << endl ;
//   int ans1 = multiply(5,4,2);
//    cout << ans1 << endl ;
// }

// #include <iostream>
// using namespace std ;
// int simpleINterest(int p , int r , int t)
// {
//   int ans = (p*r*t)/100;
//   int ans1 = p + ans ;
//   return ans1;
// }
// {
//   int result = simpleINterest(5000,7,4);
//   cout << result << endl ;
// }

//printing prime numbers from 1 to 100 
  // #include <iostream>
  // using namespace std ;
  // bool isPrime(int num )
  // {
  //   if(num <=1)
  //   {
  //     return false;
  //   } 
    
  //     for(int i = 2 ; i<num ; i++)
  //     {
  //       if(num % i == 0)
  //       {
  //         return false ;
  //       }
  //     }
  //     return true ;
  // }

  // // void printPrimenum()
  // // {
  // //   for (int i = 1 ; i<=100 ; i++)
  // //   {
  // //     if (isPrime(i))
  // //     {
  // //       cout << i << " ";
  // //     }
  // //   }cout << endl ;
  // //}
  // int main()
  // {
  //   int num;
  //   cin>> num ; 
  //   if (isPrime(num))
  //   {
  //     cout << num << "is a prime number"<<" ";
  //   }
  //   else{
  //     cout << num <<"is not a prime number"<<" ";

  //   }
  // }

// #include <iostream>
// using namespace std ;
// bool isPrime (int num)
// {
//   if (num <=1)
//   {
//     return false ;
//   }
//   for (int i = 2 ; i< num ; i++)
//   {
//     if (num % i == 0)
//     {
//       return false ;
//     }
//   }
//   return true ;
// }
// void printPrime()
// {
//   for (int i = 1 ; i<= 100 ; i++)
//   {
//     if (isPrime(i))
//     {
//       cout << i << " ";
//     }
//   }cout << endl ;
// }
// int main()
// {
//   printPrime();
// }
