#include <iostream>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "Это (\") - кавычки, а это (\\) - обратная косая черта." << std::endl;
}
