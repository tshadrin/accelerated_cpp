#include <iostream>
#include <string>
int main()
{
    std::cout << "Введите, пожалуйста, своё имя: ";
    std::string name;
    std::cin >> name;

    std::cout << "Привет, " << name << "!" << std::endl;
}
