#include "../lib/Person.hpp"
#include "picotest/picotest.h"

void test_person(void) {
  Person p("foo");
  ok( p.getName() == "foo" );
}
