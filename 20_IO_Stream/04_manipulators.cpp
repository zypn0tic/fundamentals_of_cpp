// endl is a manipulator, manipulator helps in formating the output
// manipulator for int are -> hex, oct, dec.
// manipulator for float -> fixed, scientific.
// other -> set(), left, right, ws.

#include <iostream>
#include <iomanip>

int main()
{
  std::cout << std::hex << 163 << std::endl;
  std::cout << std::setw(10) << "Hello" << std::endl;
  return 0;
}