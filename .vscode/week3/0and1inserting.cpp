#include <iostream>
using namespace std ;
void insertNumber(int arr[] , int size )
{
  int countZero = 0 ;
  int countOne = 0 ;
  for (int i = 0 ; i < size ; i++)
  {
    if (arr[i] == 0 )
    {
      countZero++;
    }
    else if (arr[i]==1)
    {
      countOne++;
    }
  }
  for (int i = 0 ; i<countZero ; i++)
  {
    arr[i]= 0 ;
  }
  for (int i = countZero ; i< size ;i++)
  {
    arr[i] = 1 ;
  }
  for(int i = 0 ; i<size ; i++)
  {
    cout << arr[i];
  }
}

// int main()
// {
//   int n ;
//   cout <<"The size of the array is : ";
//   cin>> n ;
//   int arr[n];
//   for (int i = 0 ; i < n ; i++)
//   {
//     cout << "The element of the array is:  ";
//     cin>> arr[i];
//   }
//   insertNumber(arr , n );


// }


// #include <iostream>
// using namespace std ;
// void insertNumber(int arr[] , int n )
// {
//   int countZero = 0 ;
//   int countOne = 0 ;
//   int countTwo = 0 ;
//   for (int i = 0  ; i < n ; i++)
//   {
//     if (arr[i] == 0)
//     {
//       countZero++;
//     }
//     else if (arr[i] == 1)
//     {
//       countOne++;
//     }
//     else if (arr[i]== 2)
//     {
//       countTwo++;
//     }
//   }
//   cout << countZero << endl;
//   cout << countOne << endl;
//   cout << countTwo << endl;
//   for (int i = 0 ; i < countZero ; i++)
//   {
//      arr[i] = 0;
//   }
//   for (int i = countZero ; i < countZero+countOne ; i++)
//   {
//      arr[i] = 1 ; 
//   }
//   for (int i = countZero+countOne ; i < n ; i++)
//   {
//     arr[i] = 2 ;
//   }
// }

// int main()
// {
// int arr[] = {1,2,1,0,0,0,1,2,0,0,1,2,0};
// int size = 13;
// insertNumber(arr , size);
// for (int i = 0 ; i < size ; i++)
// {
//   cout << arr[i]<<" ";
// }
// }
#include <iostream>
#include <algorithm>
using namespace std ;
void twoPointer(int arr[] , int n )
{
  int i = 0 ;   
  int j = 0 ;
  int k = n - 1 ;
  while( i < k)
  {
    if(arr[i] == 0)
    {
      swap(arr[j] , arr[i]);
      j++;
      i++;
    }
    else 
    {
      swap(arr[k] , arr[i]);      
      k-- ;
    }
  }

}

int main()
{
int arr[] = {0,0,1,1,1,0,0,1,1,0,0,0,1,0};
int size = 14;
twoPointer(arr , size);
for (int i = 0 ; i < size ; i++)
{
  cout << arr[i]<<" ";
}

}