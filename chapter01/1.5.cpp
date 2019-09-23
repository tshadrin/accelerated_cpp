#include <iostream>
#include <string>

int main()
{
    { std::string s{"Одна строка"};
    { std::string x{s + ", действительно"};
      std::cout << s << std::endl;}
      std::cout << x << std::endl;}
}
