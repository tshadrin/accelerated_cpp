#include <iostream>
#include <string>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    { std::string s{"Одна строка"};
    { std::string x{s + ", действительно"};
      std::cout << s << std::endl;
      std::cout << x << std::endl;}}
}
