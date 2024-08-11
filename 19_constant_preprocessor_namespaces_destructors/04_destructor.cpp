#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }

    // Member function
    void display() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // Calling a member function
    obj.display();

    // The destructor will be called automatically when obj goes out of scope
    return 0;
}