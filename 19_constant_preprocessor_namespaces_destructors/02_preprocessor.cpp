#include <iostream>

// Macro definition
#define MAX_USERS 100

// Conditional compilation
#define DEBUG

// File inclusion
// #include "myheader.h" // No files with that name.

// Line control
#line 100 "newfile.cpp"

// Error directive
#ifndef MAX_USERS
#error "MAX_USERS is not defined"
#endif

int main()
{
  std::cout << "Max users: " << MAX_USERS << std::endl;

// Conditional compilation
#ifdef DEBUG
  std::cout << "Debug mode is enabled" << std::endl;
#endif

  // Constant pointer
  int value1 = 10;
  int *const ptr1 = &value1;
  std::cout << "Value pointed by ptr1: " << *ptr1 << std::endl;
  // ptr1 = &value2; // This would cause a compilation error

  // Pointer to constant data
  int value2 = 20;
  const int *ptr2 = &value1;
  std::cout << "Value pointed by ptr2: " << *ptr2 << std::endl;
  ptr2 = &value2; // This is allowed
  std::cout << "Value pointed by ptr2 after change: " << *ptr2 << std::endl;
  // *ptr2 = 30; // This would cause a compilation error

  // Constant pointer to constant data
  const int *const ptr3 = &value1;
  std::cout << "Value pointed by ptr3: " << *ptr3 << std::endl;
  // ptr3 = &value2; // This would cause a compilation error
  // *ptr3 = 30; // This would cause a compilation error

  return 0;
}