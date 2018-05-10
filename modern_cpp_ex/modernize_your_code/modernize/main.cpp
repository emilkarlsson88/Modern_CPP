#include<functional>
#include<map>
#include<iostream>
#include<memory>
#include<assert.h> // <- modernize-deprecated-headers

// modernize-raw-string-literal
const char *const Path{"C:\\Program Files\\Vendor\\Application.exe"};
const char *const RegEx{"\\w\\([a-z]\\)"};

int add(int x, int y) { return x + y; }

class MyPair {
	private:
		int m_one;
		int m_two;
	public:
		MyPair(int t_one, int t_two) :
		       	m_one(t_one), m_two(t_two) {};
		void print(void) { // <- modernize-redundant-void-arg
			std::cout 
				<< m_one 
				<< " + " 
				<< m_two 
				<< " = " 
				<< m_one + m_two << '\n';
		}
};

struct A {
	A() : i(5), j(10.0) {} // <- modernize-use-default-member-init
	A(int i) : i(i), j(10.0) {}
	int i;
	double j;
};

struct B {
	B() {}; // <- modernize-use-equals-default
	~B() {}; // <- modernize-use-equals-default
	private:
		B(const B&);
		B& operator=(const B&);
};

void assignment() {
	char *a = NULL; // <- modernize-use-nullptr
	char *b = 0; // <- modernize-use-nullptr
	char c = 0;
}

int *ret_ptr() {
	return 0; // <- modernize-use-nullptr
}

int main() {
	// modernize-avoid-bind
	int x = 2;
	auto clj = std::bind(add, x, std::placeholders::_1);
	std::cout << "2 + 3 = " << clj(3) << '\n';

	// modernize-loop-convert
	int arr[] = { 1, 2, 3 };
	for (int i = 0; i < 3; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	std::vector<int> vec = { 1, 2, 3 };
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << '\n';

	// modernize-make-shared
	auto my_shared_ptr = std::shared_ptr<MyPair>(new MyPair(1, 2));
	my_shared_ptr->print();

	// modernize-make-unique
	auto my_unique_ptr = std::unique_ptr<MyPair>(new MyPair(1, 2));
	my_unique_ptr->print();
}
