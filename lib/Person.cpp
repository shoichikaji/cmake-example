#include "Person.hpp"

Person::Person(const std::string& name) : m_name(name) {}
Person::~Person() {}

const std::string& Person::getName() { return m_name; }
