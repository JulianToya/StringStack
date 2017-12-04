#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include <string>
#include <stack>
#include "TrueStack.h"

class StringStack : public TrueStack
{
private:
  std::stack<std::string> myStack;

public:
  std::string pop();
  void push(std::string value);
  bool isEmpty();
};

#endif
