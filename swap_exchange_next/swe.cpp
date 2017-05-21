#include <utility>
#include <iostream>
#include <vector>


int main()
{
  {
    std::cout << "exchange" << '\n';
    int a = -1;
    int b = 0;

    std::cout << a << " " << b << '\n';
    b = std::exchange(a,4);
    std::cout << a << " " << b << '\n';
  }
  {
    std::cout << "next" << '\n';
    std::vector<int> v = {0,1,2,3,4,5};

    std::cout << *v.begin() << '\n';
    auto i = std::next(v.begin(), 3);
    std::cout << *i << '\n';
  }
  
  
  return 0;
}
