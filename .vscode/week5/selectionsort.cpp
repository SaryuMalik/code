//for ith iteration pick smallest element from n-1  to i index  and swap it with ith element 
// #include <iostream>
// #include <vector>
// using namespace std ;
// void SelectionSort(vector<int> &nums )
// {
//   int n = nums.size();
//   for (int i = 0  ; i < n - 1 ; i++)
//   {
//     int minIndex = i ;
//     for (int j = i +1 ; j < n ; j++)
//     {
//       if (nums[j]< nums[minIndex])
//       minIndex = j ;
//     }  
     
//     swap(nums[i] , nums[minIndex]);
 
//   }

// }
// int main(){
//   vector <int> v = {-4,-5,2,5,1,9,0};
//   int n = v.size();
//   SelectionSort(v);
//   for (int i = 0 ; i < n ; i++)
//   {
//     cout << v[i]<<" " ;
//   }

// }

// #include <iostream>
// #include <vector>
// using namespace std ;
// void SelectionSort(vector<int>&arr)
// {
//    int n = arr.size() ;
//   for (int i = 0 ; i < n ; i++)
//   {
//     int minIndex = i  ;
//     for (int j = i + 1 ; j < n ; j++)
//     {
//          if (arr[minIndex] > arr[j])
//          {
//           minIndex = j ;
//           }
         

//     }
//     swap(arr[minIndex] , arr[i]);
//   }

// }

// int main(){
//   vector<int>v = {-4,-5,2,5,1,9,0};
//   int n = v.size();
//   SelectionSort(v);
//   for (int i = 0 ; i < n ; i++)
//   {
//     cout <<v[i]<<" ";
//   }
// }