#include "../lib/Person.hpp"
#include "picotest/picotest.h"

int main(void) {
  Person p("foo");
  ok( p.getName() == "foo" );
  return done_testing();
}
