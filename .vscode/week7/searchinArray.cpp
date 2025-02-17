#include <iostream>
#include <vector>
using namespace std ;
bool oddPrint(int arr[] , int size , int  index,int  target){
   if (arr[index] == size)//out of bound chala gya hai 
   return false  ;
   if (arr[index] == target)
   return true ;
   oddPrint(arr , size , index+1 , target);
}
int main(){
  int arr[] = { 1, 2, 4 ,3, 7, 5,8 ,6};
  int size = 8;
  int index = 0 ;
  int target = 9;
  bool ans =oddPrint(arr , size , index  , target);  
  cout << ans ;
 
}