#include<iostream>
int main() {
  int name = 1;
  std::cout << name << '\n';
  {
    int name = 2;
    std::cout << name << '\n';
  }
  std::cout << name << '\n';
}
