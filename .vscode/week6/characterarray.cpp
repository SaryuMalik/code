#include <iostream>
using namespace std ;
int main()
{
  char ch[100];
  //cin>> arr ;
  // cout<<arr ;
  // cout <<arr[0];
  //to take a full name as an input 
//we use cin getline 
// cin.getline(arr , 100);
// cout << arr<<endl ;
// int n = 20 ;
// int count  = 0 ;
// for (int i = 0 ; i< n ; i++)
// {
//    if (arr[i] == '\0')
//    break ;
//    count++;
   
// }
// cout << count ;
cin.getline(ch , 100);
int n = 20 ;
int count = 0  ;
int i = 0 ;
while (ch[i] != '\0')
{
  count++;
  i++;
}
for (int i = 0 ; i < count ; i++)
{
  if (ch[i]>='A' && ch[i] <='Z')
  ch[i] =  ch[i]- 'A' + 'a';
}
for (int i = 0 ; i < count ; i++)
{
  cout <<ch[i];
}
}
  