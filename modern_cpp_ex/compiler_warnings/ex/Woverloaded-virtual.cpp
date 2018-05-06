#include <iostream>
#include <memory>

class Base {
public:
 explicit Base(const std::string& t_status) : m_status{t_status} {}
  virtual ~Base() {}
  virtual void print() const { std::cout << "From Base: " << m_status << std::endl; }

protected:
  std::string m_status;
};

class Derived : public Base {
public:
 explicit Derived(const std::string& t_status) : Base{t_status} {}
  void print() { std::cout << "From Derived: " << m_status << std::endl; }
};

int main() {
    std::unique_ptr<Base> base_base = std::make_unique<Base>("I'm Base!");
    std::unique_ptr<Derived> derived_derived = std::make_unique<Derived>("I'm Derived!");
    std::unique_ptr<Base> base_derived = std::make_unique<Derived>("I'm Derived!");
    base_base->print();
    derived_derived->print();
    base_derived->print();
}
