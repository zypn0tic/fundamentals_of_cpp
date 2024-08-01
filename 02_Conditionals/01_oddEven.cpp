#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter any number to calculate odd or even : ";
  cin>>x;
  if (x % 2 == 0){
    cout<<x;
    cout<<" is even number"<<endl;
  }
    else{
    cout<<x;
    cout<<" is odd number"<<endl;
    }
}


/*  
  if (x%2==0) cout<<"even number";
  if (x%2!=0) cout<<"Odd number"; */