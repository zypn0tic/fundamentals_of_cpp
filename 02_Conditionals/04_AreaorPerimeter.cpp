#include<iostream>
using namespace std;
int main(){

  int l,b,Ar,P;
  
  cout<<"Enter length of rectangle : ";
  cin>>l;
  cout<<"Enter breadth of rectangle : ";
  cin>>b;

  Ar = l*b;
  P = 2*(l+b);

  if (Ar>P){
    cout<<"Area is greater"<<endl;
  }
  else if (P>Ar){
    cout<<"Perimeter is greater"<<endl;
  }
  else {
    cout<<"Both are same"<<endl;
  }

  cout<<"The area is : ";
  cout<<Ar<<endl;
  cout<<"The Perimeter is : ";
  cout<<P<<endl;

}