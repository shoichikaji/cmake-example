#include "../lib/Man.hpp"
#include "picotest/picotest.h"

int main(void) {
  Man m("foo");
  ok( m.getName() == "foo" );
  return done_testing();
}
