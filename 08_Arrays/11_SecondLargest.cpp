/* #include <iostream>
#include <climits>

int main() {
    int arr[] = {12, 13, 1, 10, 34, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] != max && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    std::cout << "Second largest element: " << secondMax << 
    std::endl;

    return 0;
}
 */

#include<iostream>
#include<climits>

int max(int a, int b){
    if(a > b) return a;
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
    int mx = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++){
        mx = max(mx,arr[i]);
    }

    for (int i = 0; i < n; i++){
        if (arr[i] != mx ) secondMax = max(secondMax, arr[i]);
    }

    std::cout<<std::endl;
    std::cout<<"The second Maximum Value of given array is "<<secondMax<<std::endl;
}