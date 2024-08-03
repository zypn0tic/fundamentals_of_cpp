#include <iostream>

int main() {
    int n; // number of rows (and columns)
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        if(i == 0 || i == n - 1) { // first or last row
            for(int j = 0; j < n; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        } else { // middle rows
            for(int j = 0; j < n; ++j) {
                if(j == 0 || j == n - 1) { // first or last column
                    std::cout << "* ";
                } else {
                    std::cout << "  "; // print spaces in the middle columns and rows
                }
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
//other will soon.                