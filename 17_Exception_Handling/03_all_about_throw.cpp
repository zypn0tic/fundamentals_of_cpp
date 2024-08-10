// You can throw everything. like literally everything eg. int, float, pointer, string, even class
// While throwing class you just have to extend it to build in class of C++ :public exception

#include <iostream>
#include <stdexcept>
using namespace std;
class StackOverFlow : public exception
{
};
class StackUnderFlow : public exception
{
};
class Stack
{
private:
  int *stk;
  int top = -1;
  int size;

public:
  Stack(int sz)
  {
    size = sz;
    stk = new int[size];
  }
  void push(int x)
  {
    if (top == size - 1)
      throw StackOverFlow();
    top++;
    stk[top] = x;
  }
  int pop()
  {
    if (top == -1)
      throw StackUnderFlow();
    return stk[top--];
  }
};
int main()
{
  Stack s(5);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(10);
  s.push(9);
  s.push(8);
}