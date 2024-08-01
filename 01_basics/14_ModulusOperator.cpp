#include<iostream>
using namespace std;
int main(){
  int a,b,rem;
  cout<<"Enter any number to find remainder :";
  cin>>a;
  cout<<"Enter divisor :";
  cin>>b;
  cout<<"The remainder is ";
  cout<<a%b<<endl;
}


/*
a % b = a [if a < b]
a % a = 0
a % (-b) = a % b
(-a) % b = -[a % b]
*/
