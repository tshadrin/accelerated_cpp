#include <iostream>
#include <string>
int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "Введите, пожалуйста, своё имя: ";
    std::string name;
    std::cin >> name;

    std::cout << "Привет, " << name << "!" << std::endl;
}
