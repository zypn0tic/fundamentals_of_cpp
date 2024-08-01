#include<iostream>
using namespace std;
int main(){

  int n;

  cout<<"Enter any Number : ";
  cin>>n;
  cout<<"The number is ";
  cout<<n;

  if (n%5==0 && n%3==0) {
    cout<<" and is divisible by 5 and 3";
  }
  else if (n%5==0){
    cout<<" and is only divisible by 5";
  }
  else if (n%3==0){
    cout<<" and is only divisible by 3";
  }
  else {
    cout<<" and is not divisible by 5 and 3";
  }

}












