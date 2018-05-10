#include <iostream>
#include <thread>

int index = 0;
void incrementer() {
       	++index;
}

void action(std::size_t times) {
  for (std::size_t i = 0; i < times; ++i) {
    incrementer();
  }
}

int main() {
  const std::size_t times = 10'000'000;
  std::cout << index << std::endl;
  std::thread thread_one(action, times);
  std::thread thread_two(action, times);
  thread_one.join();
  thread_two.join();
  std::cout << index << std::endl;
}
