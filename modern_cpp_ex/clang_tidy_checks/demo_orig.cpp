#include <iostream>
#include <string>
#include <vector>

class Foo {
public:
  virtual void f() { std::cout << "Foo::f()" << '\n'; };
  void g() { std::cout << "Foo::g()" << '\n'; }
};
class bar : public Foo {
public:
  void f() { std::cout << "bar::f()" << '\n'; }
};

Foo *getFoo() {
  std::vector<std::string> names;
  names.push_back("test");
  for (std::vector<std::string>::iterator it = names.begin();
       it != names.end(); ++it) {
    std::cout << *it << '\n';
  }

  std::vector<Foo> foos;
  foos.push_back(Foo());
  for (std::vector<Foo>::iterator it = foos.begin();
       it != foos.end(); ++it) {
    Foo &my_foo = *it;
    my_foo.g();
  }

  const int N = 3;
  int values[N] = {1, 2, 3};
  for (int i = 0; i < N; ++i) {
    std::cout << values[i];
  }
  std::cout << std::endl;
  Foo *foo = new Foo;
  return foo;
}

int main() {
  Foo *foo = getFoo();
  std::cout << "Call from main: " << '\n';
  foo->g();
  delete foo;
}
