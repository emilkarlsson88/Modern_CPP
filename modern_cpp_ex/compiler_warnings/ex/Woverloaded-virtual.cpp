#include <iostream>
#include <memory>

class Base {
public:
 explicit Base(std::string t_status) : m_status(t_status) {
    std::cout << "ctor Base" << std::endl;
  }
  ~Base() { std::cout << "~Base" << std::endl; }
  virtual void print() { std::cout << "From Base: " << m_status << std::endl; }

private:
  std::string m_status;
};

class DerivedTwo : public Base {
public:
 explicit DerivedTwo(std::string t_status) : Base(t_status) {
    std::cout << "ctor DerivedTwo" << std::endl;
  }
  ~DerivedTwo() { std::cout << "~DerivedTwo" << std::endl; }
  void print(std::string& status) { std::cout << "From DerivedTwo: " << status << std::endl; }
};

int main() {
    std::unique_ptr<Base> baseinterface =
        std::make_unique<DerivedTwo>("Opss! I'm not DerivedTwo!");
    baseinterface->print();
}
