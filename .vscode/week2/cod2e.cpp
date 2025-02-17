#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
  vector<int> v;
  int k=0;
  int j=0;
  vector<int>arr{1,2,2,1,3,3,4,2,2,1};
  int n = arr.size();
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++){
    if(i==n-1){
      v.push_back(j-k+1);
      break;
    }
      if(arr[i]==arr[i+1]){
           j++;
      }else{
       v.push_back(j-k+1);
        k=i+1;
        j=i+1;
      }
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1]){
      cout<<"false";
      return 0;
    }
  }
  cout<<"true";


}