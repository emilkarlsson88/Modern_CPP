#include<iostream>
int main() {
  int val = 1;
  std::cout << val << '\n';
  {
    int val = 2;
    std::cout << val << '\n';
  }
  std::cout << val << '\n';
}
