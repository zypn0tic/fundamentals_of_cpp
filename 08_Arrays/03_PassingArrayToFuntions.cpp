#include<iostream>

void change(int x[]){/* it is automatically passed by refrence not value. we don't need to give address like in integer. When passing by refrence in integer data type we did void change (int &x). it just automatically does here. It changes if you give any other names like x[] in given */
  x[0] = 9;
}

int main(){
  int arr[3] = {1,2,3};
  for(int i=0;i<=2;i++){
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  change(arr);
  for(int i=0;i<=2;i++){
    std::cout<<arr[i]<<" ";
  }
}