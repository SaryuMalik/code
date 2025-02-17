 #include <iostream>
 #include <vector>
 using namespace std ;
 int  binarySearch(vector<int>arr , int target)
 {
   int size = arr.size();
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end - start)/2;
   while(start <= end)
   {
    if (target == arr[mid])
    return mid ;
    if(target > arr[mid])
    start = mid + 1 ;
    else if (target < arr[mid])
    end = mid - 1 ;
    mid = start + (end - start)/2;
   }
   return -1 ;

 }

 int main()
 {
  vector<int>arr ;
  arr = {10,20,30,40,50,60,70,88};
  int target ;
  cout << "The target value is : ";
  cin>> target ;
  int ans = binarySearch(arr , target);
  if (ans > -1)
  {
  cout << "The index value at which the target value is present is : "<<ans ;
  }
  else 
  {
    cout << "The target value is not present in the given array " ;
  }

 }