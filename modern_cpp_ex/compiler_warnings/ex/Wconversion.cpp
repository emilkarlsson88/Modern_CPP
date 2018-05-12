#include <iostream>
#include <limits>
int main() {
  short min_val = std::numeric_limits<short>::min();
  short max_val = std::numeric_limits<short>::max();
  short value = 20000 + 20000;
  std::cout << min_val << " <= short <= " << max_val << '\n';
  std::cout << "20000 + 20000 = " << value << '\n';
}
