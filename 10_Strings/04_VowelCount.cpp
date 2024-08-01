#include<iostream>
using namespace std;

int main(){
  int n,v = 0;
  string s;
  std::cout<<"Enter a string : "<<endl;
  getline(cin, s);
  std::cout<<s<<endl;
  n = s.length();
  for (int i=0;i<n;i++){
    if (s[i] == 'a'|| s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'|| s[i] == 'A'|| s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U'){
      std::cout<<s[i]<<endl;
      v += 1;
    }
  }
  std::cout<<"The total number of vowels are : "<<v<<endl;

} 