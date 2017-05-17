#include <experimental/any>
#include <vector>
#include <string>
#include <iostream>

namespace std {
  using any = std::experimental::fundamentals_v1::any;
}
struct S {
  S(const S&) = default;
  S() = default;
};

int main()
{
  std::any a = 5;
  std::vector<std::any> v = {1,3.5, "2", S()};

  std::cout << v.size() << '\n';
  std::cout << std::experimental::fundamentals_v1::any_cast<int>(v[0]) << '\n';
 // std::cout << std::experimental::fundamentals_v1::any_cast<std::string>(v[0]) << '\n';
 
  std::cout << v[0].type().name() << '\n';
  std::cout << v[3].type().name() << '\n';


  S *s = std::experimental::fundamentals_v1::any_cast<S>(&v[3]);
}
