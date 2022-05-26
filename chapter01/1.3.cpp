#include <iostream>
#include <string>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    { const std::string s{"Одна строка"};
      std::cout << s << std::endl; }
    { const std::string s{"Другая строка"};
      std::cout << s << std::endl; }
}
