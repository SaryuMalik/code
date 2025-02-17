#include <iostream>
#include <limits.h>
using namespace std ;
void findMin(int arr[] , int index , int size , int &mini){
  if (index == size)//base request
  return ;
  mini = min (mini , arr[index]);
  findMin(arr , index + 1 , size , mini);
}
int main(){
  int arr[] = {19 ,20 , 11 , 19 , 25 , 35};
  int index = 0 ;
  int size = 6 ;
  int mini = INT_MAX ;
  findMin(arr , index , size , mini);
  cout << mini;
}