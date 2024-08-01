#include<iostream>
using namespace std;
int main(){
  int sp,cp;
  cout<<"Enter cost price of the item : ";
  cin>>cp;
  cout<<"Enter selling price of the item : ";
  cin>>sp;

  if (sp==cp){
    cout<<"No profit or loss happened."<<endl;
  }
  else{

      if (sp>cp){
    cout<<"Congratulations you made profit of : ";
    cout<<sp-cp<<endl;
  }
  else{
    cout<<"You have a loss of : ";
    cout<<cp-sp<<endl;
  }

  }
}