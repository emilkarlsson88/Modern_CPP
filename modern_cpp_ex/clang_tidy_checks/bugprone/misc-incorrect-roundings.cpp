#include<iomanip>
#include<iostream>

int my_round(float value) {
  return (int)(value + 0.5f);
}

void print(float value) {
  std::cout << "my_round("
            << std::setprecision(10)
            << value << ") = "
            << my_round(value) << '\n';
}

int main() {
  float val_one{0.499999975f};
  float val_two = -1.4f;
  print(val_one);
  print(val_two);
}
