#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
public:
  explicit Person(const std::string& name);
  virtual ~Person();
  const std::string& getName();
protected:
  std::string m_name;
};

#endif
