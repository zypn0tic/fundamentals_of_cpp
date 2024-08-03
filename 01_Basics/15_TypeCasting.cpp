#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter any integer to half :"<<endl;
  cin>>x;
  float y = (float) x; //  This is TypeCasting also don't write float y = x
  cout<<"The half of integer is :"<<endl;
  cout<<y/2<<endl;
}