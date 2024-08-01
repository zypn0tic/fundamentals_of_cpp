#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,v = 0;
  string s;
  std::cout<<"Enter even string : "<<endl;
  getline(cin, s);
  n = s.length();
  reverse(s.begin(),s.end() +n/2);
  cout<<s<<endl;
  
} 