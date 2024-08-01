#include<iostream>
using namespace std;

int main(){
  int n;
  string s;
  std::cout<<"Enter a string : "<<endl;
  getline(cin, s);
  std::cout<<s<<endl;
  n = s.length();
  for (int i=0;i<n;i++){
    if (i%2 == 0 && i != 0){
      if (s[i] == ' '){
        continue;
      }
      else{
        s[i] = 'a';
      }
    }
    else{
      continue;
    }
  }

  std::cout<<"The udated string is "<<s<<endl;

} 