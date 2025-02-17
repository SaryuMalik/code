#include <iostream>
#include <vector>
using namespace std ;
void printv(vector<vector<int>>&v)
{
  for (int i = 0 ; i < v.size() ; i++)
  {
    vector<int>&temp = v[i];
    int a = temp[0] ;
    int b = temp[1] ;
    cout << a << " "<< b <<endl ;
    
  }
}
int main(){
  vector<vector<int>>v ;
  int n ;
  cin>> n ;
  for (int i = 0 ; i < n ; i++)
  {
    int a ;
    int b ;
    cin>> a ;
    cin>> b ;
    
  vector<int> temp ;
  temp.push_back(a);
  temp.push_back(b);
  v.push_back(temp);
  }

  printv(v);



}