#include <string>
#include <iostream>
#include "../lib/Person.hpp"

int main(void) {
  Person me("John");
  std::cout << "my name is " << me.getName() << ".\n";
  return 0;
}
