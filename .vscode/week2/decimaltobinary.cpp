// #include <iostream>
// #include <cmath>
// using namespace std ;
// int decimaltobinary(int n)
// {
//   int binarynumber = 0;
//   int placeholder = 1;
//   while(n>0)
//   {
//     int bit  = n%2;
//     binarynumber += bit * placeholder ;
//     n = n/2;
//     placeholder*=10;
//     }
//     return binarynumber;
// }
// int main()
// {
//   int n ;
//   cout<<"Enter an integer : ";
//   cin>> n;
//   int result = decimaltobinary(n);
//   cout << result <<" ";

// }


// #include <iostream>
// #include <cmath>
// using namespace std ;
// int decimaltobinary(int n)
// {
//   int binarynumber = 0;
//   int i = 1 ;
//   while (n > 0)
//   {
//     int bit = n%2;
//     binarynumber = bit*pow(10,i++)+binarynumber ;
//     n = n/2;
//   }
//   return binarynumber ;
//  int decimaltobinary2(int n)
// {
//   int binarynumber = 0;
//   int i = 0 ;
//   while (n > 0)
//   {
//     int bit = n&1;
//     binarynumber = bit*pow(10,i++)+binarynumber ;
//     n = n>>1;
//   }
//   return binarynumber ;
// }
// int main()
// {
//   int n ;
//   cin>> n ;
//   int result = decimaltobinary2(n);
//   cout << result;
// }

#include <iostream>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binaryNumber;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);
    std::cout << "The decimal equivalent is: " << decimalNumber << std::endl;

    return 0;
}
