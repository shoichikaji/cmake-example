#include "picotest/picotest.h"

void test_person(void);
void test_man(void);

int main(void) {
  subtest("person", test_person);
  subtest("man", test_man);
  return done_testing();
}
