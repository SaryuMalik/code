// #include <iostream>
// using namespace std ;
// bool  twoSum(int arr[] , int size , int target)
// {

//   for (int i = 0 ; i < size ; i++)
//   {
//     for (int j = 0 ; j < size ; j++)
//     {
//        if (arr[i]+ arr[j]== target)
//        {
//         return true ;
//        }
//     }
//   }
//   return false ; 
// }
// int main()
// {
// int arr[] = {10,20,30,40,50};
// int size = 5 ;
// int target = 30 ;
// bool ans = twoSum(arr , size  , target);  
// cout << ans ;

// }

// #include <iostream>
// using namespace std ;
// pair<int , int >  twoSum(int arr[] , int n , int target)
// {
//  pair<int , int > ans = make_pair(-1,-1);
//   for (int i = 0 ; i < n ; i++)
//   {
//     for (int j = 0 ; j < n ; j++)
//     {
//       for (int k = 0 ; k < n ; k++)
//       {
//         if (arr[i] + arr[j] == target)
//       {
//          ans.first = arr[i];
//          ans.second = arr[j];
         
//          return ans ;
//       }
//       }
    
//   }
//   return ans ;  
// }
// }
// int main()
// {
//   int arr[] = {10,20,30,40,50};
//   int target = 50 ;
//   int size = 5 ; 
//   pair<int , int> ans1  = twoSum(arr , size , target) ;
//   cout << ans1.first <<" "<< ans1.second ;

// }



#include <iostream>
using namespace std ; 
pair<int , int > twoSum(int arr[] , int n , int target)
{
  pair<int , int> ans  ;
  for (int i = 0 ; i < n ; i++)
  {
    for (int j = i+1 ; j < n ; j++)
    {
      if (arr[i] + arr[j] == target )
      {
        ans.first = arr[i];
        ans.second = arr[j];
        return ans ;
      }
    }
  }

}
int main()
{
  int arr[] = { 1 , 2 , 3 , 4 , 5 , 7};
  int size = 10 ;
  int target ; 
  cout << "The target value is : ";
  cin>> target;
  pair<int , int > ans1 = twoSum(arr , size , target);
  cout <<"The pair is "<< ans1.first<<","<< ans1.second ;


}