#include <bits/stdc++.h> 
using namespace std ;
int main()
{
  int arr[] = {1,12,-5,-6,50,3};
  int n = 6;
  int k ;
  cin>> k ;

  int i  = 0 ;
  int j = k-1;
  int sum = 0 ;
  for (int y = i ; y <= j ; y++)
  {
    sum = sum + arr[y];
  }
    int maxsum = sum ;
    j++;
    while(j < n)
    {
       sum = sum - arr[i++];
       sum = sum + arr[j++];
       maxsum = max(maxsum , sum);

    }
   double maxavg = maxsum / (double)k;
   cout << maxavg;
  
  
}