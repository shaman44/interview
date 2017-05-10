#include <iostream>

class A {
  static const int &create_static() 
  {
    std::cout << "create static" << std::endl;
    static const int element = -1;
    return element; 
  }
  const int &element = create_static();
public:
  const int &static_ref()
  {
    return element;
  }

};

auto main() -> int
{
  A a;
  a.static_ref(); 
  return 0;
}
