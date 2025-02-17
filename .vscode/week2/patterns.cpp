// //square pattern
// #include <iostream>
// using namespace std ;
// int main()
// {
// for (int i = 1 ; i<=4 ; i++)
// {
//   for (int j = 1 ; j <=4 ; j++)
//   {
//     cout << "*"<<" ";
//   }cout << endl;
// }
// }

//rectangle pattern 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   for (int i = 1 ; i<=3 ; i++)
//   {
//     for (int j = 1 ; j<=8 ; j++)
//     {
//       cout << '*'<<" ";
//     }
//     cout << endl ;
//   }
// }

//hollow rectangle 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n , m ;
//   cout <<"Enter the value of n : ";
//   cin>> n;
//   cout <<"Enter the value of m : ";
//   cin>> m ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<=m ; j++)
//     {
//       if(i==1 || i==n)
//       {
//       cout << '*'<<" ";
//       }
//       else{
//         if(j==1 || j==m)
//         {
//           cout << '*'<<" ";
//         }
//         else{
//           cout<<"  ";
//         }
//       }
//     }
//     cout << endl ;
//   }
// }

//hollow square 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout <<"Enter the value of n : ";
//   cin>> n;
  
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<=n ; j++)
//     {
//       if(i==1 || i==n || j==1 || j==n)
//       {
//       cout << '*'<<" ";
//       }
//       else{
//         cout<<"  ";
//         }
//       }cout << endl ;
//     }
    
//   }

//half pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   for (int i = 1 ; i<=5 ; i++)
//   {
//     for ( int j = 1 ; j<= i ; j++)
//     {
//       cout <<"*"<<" ";
//     }cout << endl ;
//   }
// }

//inverted half pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<=n; i++)
//   {
//     for ( int j = 1 ; j<= (n+1)-i ; j++)
//     {
//       cout <<"*"<<" ";
//     }cout << endl ;
//   }
// }

//holow half pyramid 

// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ; 
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<= n ; i++)
//   {
//     for ( int j = 1 ; j<= i ; j++)
//     {
//       if(i==1 || i == 2 ||i == n ||j == 1 || j == i )
//       {
//       cout <<"*"<<" ";
//       }
//       else 
//       {
//         cout <<"  ";
//       }
//     }cout << endl ;
//   }
// }


//inverted hollow pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ; 
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<= n ; i++)
//   {
//     for ( int j = 1 ; j<= (n+1)-i ; j++)
//     {
//       if(i==1 || i == n-1 ||i == n ||j == 1 || j == (n+1)-i )
//       {
//       cout <<"*"<<" ";
//       }
//       else 
//       {
//         cout <<"  ";
//       }
//     }cout << endl ;
//   }
// }

//numeric pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << " Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<=i ; j++)
//     {
//       cout << j <<" "; 
//     }cout << endl ;
//   }
// }

//full pyramid 

// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";

//   cin>> n ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<= n-i ; j++)
//     {
//       cout << " ";
//     }
//     for (int m = 1 ; m<=i ; m++ )
//     {
//       cout <<"*"<<" ";
//     }cout << endl ;
//   }
// }

//hollow full pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";

//   cin>> n ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<= n-i ; j++)
//     {
//       cout << " ";
//     }
//     for (int m = 1 ; m<=i ; m++ )
//     {
//       if (i==1 || i == n ||  m==1 || m == i){
//           cout <<"*"<<" ";
//       }
//     else 
//     {
//       cout << "  ";
//     }
//     }cout << endl ;
//     }
//   }

//inverted full pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i <= n ; i++)
//   {
//     for (int j = 1 ; j< i ; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1 ; j<= (n+1)-i ; j++)
//     {
//       cout << "*"<<" ";
//     }cout << endl ;
//   }
// }

//diamond 

// #include  <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<= n-i ; j++)
//     {
//       cout << " ";
//     }
//     for (int m = 1 ; m<=i ; m++ )
//     {
//       cout <<"*"<<" ";
//     }cout << endl ;
//   }
//   for (int i = 1 ; i <= n ; i++)
//   {
//     for (int j = 1 ; j< i ; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1 ; j<= (n+1)-i ; j++)
//     {
//       cout << "*"<<" ";
//     }cout << endl ;
//   }
// }

//inverted hollow pyramid 
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";
//   cin>> n ;
//   for (int i = 1 ; i<= n ; i++)
//   {
//     for (int j = 1 ; j < i ; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1 ; j<= (n-i)+1 ; j++)
//     {
//       if(i==1 || j==1 || j==(n-i)+1 || i==n)
//       {
//       cout << "* ";
//       }
//       else 
//       {
//         cout <<"  ";
//       }
//     }cout << endl ;
//   }
// }



//hollow diamond
// #include <iostream>
// using namespace std ;
// int main()
// {
//   int n ;
//   cout << "Enter the value of n : ";

//   cin>> n ;
//   for (int i = 1 ; i<=n ; i++)
//   {
//     for (int j = 1 ; j<= n-i ; j++)
//     {
//       cout << " ";
//     }
//     for (int m = 1 ; m<=i ; m++ )
//     {
//       if (i==1  ||  m==1 || m == i){
//           cout <<"*"<<" ";
//       }

//     else 
//     {
//       cout << "  ";
//     }
//     }cout << endl ;
//   }
//   for (int i = 1 ; i<= n ; i++)
//   {
//     for (int j = 1 ; j < i ; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1 ; j<= (n-i)+1 ; j++)
//     {
//       if( j==1 || j==(n-i)+1 || i==n)
//       {
//       cout << "* ";
//       }
//       else 
//       {
//         cout <<"  ";
//       }
//     }cout << endl ;
//   }
// }
    
//multi pyramid
#include <iostream>
using namespace std ;
int main()
{
  int n ;
  cout <<"Enter a no.: ";
  cin>> n ;
  for (int i = 1 ; i<= n ; i++)
  {
    for (int j = 1 ; j <= (n+1)-i ; j++){
    cout << "*";
    }
    for (int j = 1 ; j<= ((2*i)+1)-2 ; j++)
    {
      cout << " ";
    }
    for (int j = 1 ; j <= (n+1)-i ; j++){
    cout << "*";
    }cout << endl ;
  }
  for (int i = 1 ; i<= n ; i++)
  {
    for (int j = 1 ; j <=i ; j++){
    cout << "*";
    }
    for (int j = 1 ; j<= ((2*((n+1)-i))+1)-2 ; j++)
    {
      cout << " ";
    }
    for (int j = 1 ; j <= i ; j++){
    cout << "*";
    }cout << endl ;
  }

}

