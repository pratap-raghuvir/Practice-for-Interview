#include <bits/stdc++.h>
using namespace std;

int main() {
  //Taking the number as input
  int a;
  cin>>a;
  //Printing the multiples of 5 less than a
  int num =1;
  
  while(num<=a)
  {
    if((num%5)==0)
    {
      cout<<num<<endl;
      //Increment the num by 1 everytime
      num++;
    }


   }
  //Alternative way to do so
  /*for(int i=5;i<=a;i++)
  {
  if(i%5==0)
  cout<<i<<endl;
  }
  */
  
  return 0;
}
