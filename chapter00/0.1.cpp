#include <iostream>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "Привет, мир!" << std::endl;
}
