#include <iostream>

int main()
{
#ifdef __WIN32
    system("chcp 65001");
#endif
    std::cout << "#include <iostream>" << std::endl;
    std::cout << "int main()" << std::endl;
    std::cout << "{" << std::endl << "    std::cout << \"Hello, world!\";" << std::endl << "}" << std::endl;

}
