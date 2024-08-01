#include<iostream>
using namespace std;

int main(){
  string s ="kalpit";
  cout<<s<<" "<<s.length()<<endl;
  s.append(" Sharma");
  cout<<s<<" "<<s.length()<<endl;
  s = s + " Poudel"; // + operator is don operator in strings
  cout<<s<<" "<<s.length()<<endl;
}