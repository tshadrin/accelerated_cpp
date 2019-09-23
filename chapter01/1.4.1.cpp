#include <iostream>
#include <string>

int main()
{
    { const std::string s{"Одна строка"};
      std::cout << s << std::endl; 
    { const std::string s{"Другая строка"};
      std::cout << s << std::endl; };}
}
