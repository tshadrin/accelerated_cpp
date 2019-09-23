#include <iostream>
#include <string>

int main()
{
    std::cout << "Как вас зовут? ";
    std::string name;
    std::cin >> name; 
    std::cout << "Привет " << name
              << std::endl << "А как вас зовут?";
    std::cin >> name;
    std::cout << std::endl << "Привет " << name
              << "; c вами также приятно было познакомиться"
              << std::endl;
}
