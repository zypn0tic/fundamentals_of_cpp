#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  string s ="kalpit";
  cout<<s<<" "<<s.length()<<endl;
  std::reverse(s.begin(),s.end());
  cout<<s<<" "<<s.length()<<endl;
}