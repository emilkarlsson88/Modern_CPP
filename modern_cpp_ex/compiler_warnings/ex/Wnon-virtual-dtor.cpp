#include <memory>
#include <iostream>

class BaseNoVirtualDtor {
public:
 explicit BaseNoVirtualDtor(std::string t_status) : m_status(t_status) {
    std::cout << "ctor BaseNoVirtualDtor" << std::endl;
  }
  ~BaseNoVirtualDtor() { std::cout << "~BaseNoVirtualDtor" << std::endl; }
  virtual void print() { std::cout << "From BaseNoVirtualDtor: " << m_status << std::endl; }

protected:
  std::string m_status;
};


class Derived : public BaseNoVirtualDtor {
public:
 explicit Derived(std::string t_status) : BaseNoVirtualDtor(t_status) {
    std::cout << "ctor Derived" << std::endl;
  }
  ~Derived() { std::cout << "~Derived" << std::endl; }
  virtual void print() override {
    std::cout << "From Derived: " << m_status << std::endl;
  }
  void print(std::string& status) { std::cout << "From Derived: " << status << std::endl; }
};

int main() {

  {
    std::unique_ptr<Derived> derived =
        std::make_unique<Derived>("Looks ok, but it is not!");
    derived->print();
  }
  std::cout << "----------------------" << '\n';
  {
    std::unique_ptr<BaseNoVirtualDtor> baseinterface =
        std::make_unique<Derived>("Opss! do you see it now?");
    baseinterface->print();
  }

}
