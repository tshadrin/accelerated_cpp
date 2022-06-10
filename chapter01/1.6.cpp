#include <iostream>
#include <string>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "Как вас зовут? ";
    std::string name;
    std::cin >> name; 
    std::cout << "Привет " << name
              << std::endl << "А как вас зовут? ";
    std::cin >> name;
    std::cout << "Привет " << name
              << "; c вами также приятно было познакомиться!"
              << std::endl;
}
