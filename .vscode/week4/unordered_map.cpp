#include <iostream>
#include <unordered_map>
using namespace std ;
int main()
{
  unordered_map<int , int>desk_no ;
  desk_no[1] = 53 ;
  desk_no[2] = 54;
  desk_no[3] = 57;
  unordered_map<int , int>:: iterator it ;
  for (it = desk_no.begin() ; it != desk_no.end() ; it++)
  {
    int key = it -> first ;
    int value = it -> second ;
    cout << "The Key is : "<<key<<" " << "The Value is : "<<value<<endl ;

  }

  if(desk_no.find(2) != desk_no.end())
  {
    //found 
    int value = desk_no[2];
    cout << "Yes the value is present"<<" "<<endl;
  }
  else{
    cout <<"The value is not present"<<" "<<endl;
  }

  desk_no.erase(2);

  if(desk_no.find(2) != desk_no.end())
  {
    //found 
    int value = desk_no[2];
    cout << "Yes the value is present"<<" "<<endl;
  }
  else{
    cout <<"The value is not present"<<" "<<endl;
  }

}

// #include <iostream>
// #include <unordered_map>
// using namespace std ;
// int main()
// {
// unordered_map<int , int> table ;
// table[1]= 25;
// table[3] = 36;
// table[9] = 90;
// table[4] = 46;
// for(auto it:table)
// {
//   int key = it.first ;
//   int value = it.second;
//   cout <<"The Key is : " <<key <<" "<<"The value is : "<<value << endl ;

// }


// }