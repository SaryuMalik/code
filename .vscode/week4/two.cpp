#include<iostream>
#include <vector>
using namespace std ;
vector<int> twoComp(vector<int> arr)
{
  
  int n = arr.size();

  vector<int>twoComp1(n+1 , 0) ;

  //reverse
  for (int i = n-1 ; i>= 0 ; i--)
  {
    twoComp1[i+1] = arr[i]==0 ? 1:0 ; 
  }
    int carry = 1 ;

  for (int i = n ; i>0 ; i--)
  {
    int sum = twoComp1[i] + carry ;
    twoComp1[i] =  sum %2;
    carry = sum /2;
    
 }
 if(carry)
 {
  twoComp1[0]= 1 ;
 }
 return twoComp1;

 

}
int main()
{
  vector<int>arr = {0,0,1,0,0,0,1,1,0};
  
  vector<int>finalResult = twoComp(arr);
   int start = (finalResult[0] == 0) ? 1 : 0;
  for (int i = start; i < finalResult.size(); i++) {
        cout << finalResult[i];
    }
    cout << endl;

    return 0;
}