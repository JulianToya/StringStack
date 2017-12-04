#include "StringStack.h"

std::string StringStack::pop() {
  return myStack.pop();
}

void StringStack::push(std::string value) {
  myStack.push(value);
}

bool StringStack::isEmpty() {
  return myStack.isEmpty();
}
