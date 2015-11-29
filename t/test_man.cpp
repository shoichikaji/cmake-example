#include "../lib/Man.hpp"
#include "picotest/picotest.h"

void test_man(void) {
  Man m("foo");
  ok( m.getName() == "foo" );
}
