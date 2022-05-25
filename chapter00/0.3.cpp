#include <iostream>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "\tSTOP\tSTOP" << std::endl;
    std::cout << "12345678STOP1234STOP" << std::endl;
}
