#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
public:
  explicit Person(const std::string& name);
  ~Person();
  const std::string& getName();
private:
  std::string m_name;
};

#endif
