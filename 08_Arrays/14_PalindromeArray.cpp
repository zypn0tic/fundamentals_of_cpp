#include<iostream>

int main(){
  int n,a=0,b=0;
  std::cout<<"How many elements in that Array : "<<std::endl;
  std::cin>>n;
  int arr[n];
  std::cout<<"Enter elements of that Array : "<<std::endl;
  for (int i=0;i<n;i++){
    std::cin>>arr[n];
  }

  if (n%2==0){
    for (int i=0;i<n/2;i++){
      for (int j=n-1;j>=(n/2);j--){
        if (arr[i]==arr[j]){
          a = a+1;
        }
      }
    }
    if (a == (n/2)){
      std::cout<<"Definitely Palindrome"<<std::endl;
    }
    else{
      std::cout<<"Definitely not Palindrome"<<std::endl;
    }
  }
  else{
    for (int i=0;i<=((n-1)/2)-1;i++){
      for (int j=n-1;j>=((n+1)/2);j--){
        if (arr[i]==arr[j]){
          b = b+1;
        }
      }
    }
    if (b == (n/2)){
      std::cout<<"Definitely Palindrome"<<std::endl;
    }
    else{
      std::cout<<"Definitely not Palindrome"<<std::endl;
    }
  }
}




