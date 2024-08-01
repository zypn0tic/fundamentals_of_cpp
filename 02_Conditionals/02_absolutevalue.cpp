#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter any number to calculate Modulus Value : ";
  cin>>x;
  if (x>0){
    cout<<x<<endl;
  }
  else{
    cout<<(x+(2*(-x)))<<endl;
  }

}