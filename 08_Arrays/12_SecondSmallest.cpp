// HomeWork Second Smallest Element
// Check if array is palindrome or not [1,2,3,4,3,2,1] and [1,2,3,3,2,1]
// Reverse without extra variable

#include<iostream>
#include<climits>

int min(int a, int b){
    if(a < b) return a;
    return b;
}

int main(){
    int n;
    std::cout<<"Enter number of elements in Array : ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter elements of Array : "<<std::endl;
    for (int i = 0;i < n;i++){
        std::cin>>arr[i];
    }
    int mn = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++){
        mn = min(mn,arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != mn ) secondMin = min(secondMin, arr[i]);
    }

    std::cout<<std::endl;
    std::cout<<"The second Maximum Value of given array is "<<secondMin<<std::endl;
}



