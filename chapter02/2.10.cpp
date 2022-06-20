#include <iostream>

int main()
{
    int k = 0, n = 20;
    while (k != n) {
        using std::cout; //сработает только внутри цикла
        cout << "*"; //сработала строка выше
        ++k;
    }
    std::cout << std::endl; //приходится использовать, потому-что нет директивы using
}
