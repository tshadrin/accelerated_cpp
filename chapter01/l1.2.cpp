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

    const std::string greeting{"Hello, " + name + "!"};
    const std::string spaces(greeting.length(), ' ');
    const std::string second{"* " + spaces + " *"};

    const std::string first(second.length(), '*');

    std::cout << std::endl;
    std::cout << first << std::endl; 
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
}
//поддерживается только английский язык ввода имени, иначе "плывет рамка"