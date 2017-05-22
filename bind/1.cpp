#include <functional>
#include <iostream>

void print(int i, const std::string &s)
{
  std::cout << i << " " << s << '\n';
}

int main()
{
  int i = 0;
  auto f = std::bind(&print, std::placeholders::_1, std::placeholders::_2 );
  f(i, "1");
  i = 1;
  f(i, "2");

  std::function< void (int, const std::string&)> ff(f);
  ff(i, "3");
  return 0;
}


