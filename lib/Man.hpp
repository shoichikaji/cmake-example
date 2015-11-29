#ifndef MAN_HPP_
#define MAN_HPP_

#include "Person.hpp"

class Man : public Person {
public:
  Man(const std::string& name);
  virtual ~Man();
};

#endif
