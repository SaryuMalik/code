#include <iostream>
#include <vector>
using namespace std ;
void oddPrint(int arr[] , int size , int  index  , vector<int>&ans){
   if (arr[index] == size)//out of bound chala gya hai 
   return ;
   if (arr[index]&1)
      ans.push_back(arr[index]);
     oddPrint(arr , size , index+1 , ans );
}
int main(){
  int arr[] = { 1, 2, 4 ,3, 7, 5,8 ,6};
  int size = 8;
  int index = 0 ;
  vector<int>ans ;
  oddPrint(arr , size , index , ans);  
  for (auto nums:ans)
  {
    cout << nums;
  } 
}